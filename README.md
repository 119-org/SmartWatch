SmartWatch
==========

This repository is for the full Arduino IDE development environment to easily compile for the Sony SmartWatch from a friendly, familiar interface.
If you are looking to compile on the command line (windows, linux and osx), please visit:  
https://github.com/underverk/SmartWatch_Toolchain  

## The Watch, The Hack

This is the story of a watch, a small squared-shaped watch made to make people smile while looking at it and discover a message from a loved one, a great weather prediction, or the quote of the day. 

The watch was pretty smart, as normal watches cannot do such things, but it had a small issue ... it was closed source. A bunch of hackers with a mission, decided to give the watch a small present... it's own freedom. They worked on it day and night, and day... and probably yet another night... until they got a working toolchain and a hack of the Arduino's IDE to allow the watch to run applications compiled by -literally- anyone.

You are visiting the repository of liberation! The lack of freedom is bug #1 in every system. Someone made this for all of us, so download it and contribute!

/us

INSTALLATION
------------

You should of course try to compile the code in this repository, you will need a JDK from Oracle and Apache Ant.  
This way you can contribute by making changes and pushing back your improvements.  

Please note that this repository has submodules!  
[HOW TO CLONE SUBMODULES](https://github.com/underverk/SmartWatch/wiki/Cloning-Submodules)  

If you, on the other hand, just want to get started quickly:  
[HOW TO INSTALL](https://github.com/underverk/SmartWatch/wiki/Installing-the-IDE)  


PULL REQUESTS WANTED
--------------------

This project is in the search for contributors! Here is a non exhaustive list of features that would make everyone happy:

- get the export button to upload to the watch and separate the functionality from the Verify (tick) button
- make a tool to make a security copy of the current firmware in the Watch, store it in a folder of your liking and allow uploading again once you are done playing around
- mod the UI, remove the Arduino icon (someone invent an icon, please)
- more examples, cute examples, kinky examples, games, interactive toys
- serial communication over USB, 'coz, how cool would it be to debug the code somehow
- translate some small sentences here and there
- better error messages ... they come from CLI and look ugly
- a Windows installer wouldn't hurt
- if you know how to compile dfu-util using libusb as a static reference, please contact us
- change the names of the executables
- improve the core libraries (still no accelerometer support, rtc code is broken)
- make documentation here - https://github.com/underverk/SmartWatch/wiki/