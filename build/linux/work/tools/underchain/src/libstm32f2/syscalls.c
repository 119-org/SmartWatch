/* Support files for GNU libc.  Files in the system namespace go here.
   Files in the C namespace (ie those that do not start with an
   underscore) go in .c.  */

#include <_ansi.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <sys/times.h>
#include <errno.h>
#include <reent.h>
#include <unistd.h>
#include <sys/wait.h>

#undef errno
extern int errno;

register char * stack_ptr asm("sp");

// Clear memory
void __aeabi_memclr(void *dest, size_t n) {
  memset(dest, 0, n);
}

// Increase heap
caddr_t _sbrk(int incr) {
	extern char end asm("end");
	static char *heap_end;
	char *prev_heap_end;

	if (heap_end == 0) heap_end = &end;

	prev_heap_end = heap_end;

	if (heap_end + incr > stack_ptr) {
		errno = ENOMEM;
		return (caddr_t)-1;
	}

	heap_end += incr;

	return (caddr_t)prev_heap_end;
}

// _gettimeofday primitive (Stub function)
int _gettimeofday (struct timeval * tp, struct timezone * tzp) {
  if (tzp) {
    tzp->tz_minuteswest = 0;
    tzp->tz_dsttime = 0;
  }

  return 0;
}
void initialise_monitor_handles(void) {}

int _getpid(void) {
  return 1;
}

int _kill(int pid, int sig) {
	errno = EINVAL;
	return -1;
}

void _exit (int status) {
	_kill(status, -1);
	while (1) {}
}

int _write(int file, char *ptr, int len) {
	return len;
}

int _close(int file) {
	return -1;
}

int _fstat(int file, struct stat *st) {
	st->st_mode = S_IFCHR;
	return 0;
}

int _isatty(int file) {
	return 1;
}

int _lseek(int file, int ptr, int dir) {
	return 0;
}

int _read(int file, char *ptr, int len) {
	return 0;
}

int _open(char *path, int flags, ...) {
	return -1;
}

int _wait(int *status) {
	errno = ECHILD;
	return -1;
}

int _unlink(char *name) {
	errno = ENOENT;
	return -1;
}

int _times(struct tms *buf) {
	return -1;
}

int _stat(char *file, struct stat *st) {
	st->st_mode = S_IFCHR;
	return 0;
}

int _link(char *old, char *new) {
	errno = EMLINK;
	return -1;
}

int _fork(void) {
	errno = EAGAIN;
	return -1;
}

int _execve(char *name, char **argv, char **env) {
	errno = ENOMEM;
	return -1;
}