SmartWatch
==========

This repository is for the full Arduino IDE development environment to easily compile for the Sony SmartWatch from a friendly interface.
If you are looking to compile directly from the command line, please visit:  
https://github.com/underverk/SmartWatch_Toolchain  

Note that the repository linked above contains the `master` of the toolchain used by the IDE.
If you want the latest updates that is where to get it.
You can always update your IDE with the latest stuff by downloading the SmartWatch_Toolchain repository to replace your IDE toolchain, which is located at [your-arduino-folder]/tools/underchain

## The Watch, The Hack

This is the story of a watch, a small squared-shaped watch made to make people smile while looking at it and discover a message from a loved one, a great weather prediction, or the quote of the day. 

The watch was pretty smart, as normal watches cannot do such things, but it had a small issue ... it was closed source. A bunch of hackers with a mission, decided to give the watch a small present... it's own freedom. They worked on it day and night, and day... and probably yet another night... until they got a working toolchain and a hack of the Arduino's IDE to allow the watch to run applications compiled by -literally- anyone.

You are visiting the repository of liberation! The lack of freedom is bug #1 in every system. Someone made this for all of us, so download it and contribute!

/us

PULL REQUESTS WANTED
--------------------

This project is in the search for contributors. Here a list of desired features that would make everyone happy:

- get the export button to upload to the watch and separate the functionality from the Verify (tick) button
- make a tool to make a security copy of the current firmware in the Watch, store it in a folder of your liking and allow uploading again once you are done playing around
- mod the UI, remove the Arduino icon (someone invent an icon, please)
- more examples, cute examples, kinky examples, games, interactive toys
- serial communication over serial, 'coz, how cool would it be to debug the code somehow
- translate some small sentences here and there
- better error messages ... they come from CLI and look ugly
- a Windows installer wouldn't hurt
- if you know how to compile dfu-util using libusb as a static reference, please contact us
- change the names of the executables
- ... 

INSTALLATION
------------

You can of course try to compile the code in this repository, you only will need a JDK from Oracle, Apache Ant, and to download the whole repository. On the other hand, if you just want to go hands on with the watch, download the precompiled IDE, prepare the toolchain and have fun!


## I.1 Linux

Get the compressed file here:

http://blushingboy.org/underverk/ssw-SmartWatch_alpha_00001-linux.tgz

decompress it where ever you want to and call the executable with ./arduino

(eventually if you faced issues, install dfu-util from Launchpad, you need version 0.7, as well as libusb 1.0.0 or newer)

## I.2 Mac OSX

Get the compressed file here:

http://blushingboy.org/underverk/ssw-SmartWatch_alpha_00001-macosx.zip

decompress it in your computer and -using the Terminal- call ./arduino (NOTE!! not the Arduino.app file, but ./ardino

For this to work, you need to hve either MacPorts or Brew installed. If you used MacPorts, the commands to issue should be:

sudo port install dfu-util
sudo port install libsub

Once installed, the programs will be part of the gobal path of your system and therefore it will find the compilation tools all by itself.

## I.3 Windows

Get the compressed file here:

http://blushingboy.org/underverk/ssw-SmartWatch_alpha_00001-windows.zip

or

http://blushingboy.org/underverk/ssw-SmartWatch_alpha_00001-windows-expert.zip (if you have Java installed)

Uncompress it where ever you prefer, but ... you will have to configure a whole series of things, here a list:

1. Install MinGW (“mingw-get-inst-20120426”): into a folder without spaces (recommended C:\MinGW)

  Get it from here (is th exectuable):
  
  http://sourceforge.net/projects/mingw/files/Installer/mingw-get-inst/mingw-get-inst-20120426/

  a. Check "use pre-packaged repository cataloges

  b. Accept the license agreement

  c. Selct the folder where to store it, make sure it doesn't have any blank spaces

  d. Select the application group


  e. Check the two alternatives at the bottom (“MSYS Basic System” and “MinGW Developer Toolkit”) and the C and C++ compilers (at the top)

  f. Install (it will open a terminal window to show progress and it will take some time as it needs to download a bunch of stuff from the net)

  g. Choose no log file

  h. Open a command window and try to execute the "make" command; if it doesn’t work:

    i. Right click Computer → properties → Advanced system settings → Environment Variables

    ii. Add C:\mingw\bin and C:\MinGW\MSYS\1.0\bin (semicolon between them and NO spaces) to Path under Enviroment variables

2. Install gcc-arm compiler (“gcc-arm-none-eabi-4_7-2013q1-20130313-win32”): use default options and choose Add path to environment variables

  Get it from here:
  
  https://launchpad.net/gcc-arm-embedded/+download
  
  It is an executable, very easy to install. Use the default installation ("yes" or "next" to every query). Just remember to select the checkbox with the option to add the toolchain to the patch.

3. DFU enabling drivers: 

  a. Right click Computer → properties → Device Manager

  b. Set the watch in bootloading mode (turn it on as you pulg it the USB port)

  c. It should show up in the list of available devices as "Newman"

  d. Right click Newman → Properties: Update driver
  
  e. Alternatively, if it didn't show up, use the menu "Action → Add Legacy Hardware"

  f. Choose Browse for drivers
  
  g. Select the Arduino SmartWatch driver folder, it comes with your Arduino installation

  h. Choose Trust driver 
  
4. Install dfu-utils:

  Get it from here:
  
  http://dfu-util.gnumonks.org/releases/dfu-util-0.7-binaries.7z

  a. Copy the dfu-utils subfolder files (4 files in total) to C:\MinGW\bin

5. Run the installed Arduino software and Verify the sketch, which uploads it to the SmartWatch


  Look for arduino.exe and happy hacking!
