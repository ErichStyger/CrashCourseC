# Building the Library
The goal is to build the library which is used for our program. 
The library includes drivers for the hardware (LED, etc) but includes as well the necessary startup code.

The Library only needs to be built once, or if changes to the library files are made.
The library is built with a batch script file.


To build the library:
* Open a shell/command prompt
* CD (change directory) into Content/lib
* Execute the buildlib.bat batch file (Note: there might be a bug that you need to run the batch file twice)
* Press a key at the end to continue
* Your obj folder shall now contain several object (.o) files, and one library file (**libkl25z.a**)

Congratulations, you have built the library!


