How to compile/build and run the application:
- launch a command shell (Windows-R, then use 'cmd' as command)
- CD to this folder here

Building the library:
- the library only needs to be built once, or after changes in the library
- cd to the lib subfolder
- run the buildlib batch file
- this will create the libkl25z.a inside the lib\obj folder

Running your first program:
- edit the main.c with a text editor and save it
- run the buildapp batch file to build it. It shall build without errors.
- if sucessful, it creates an application.s19 inside the obj subfolder
- copy that file to the MSD (virtual memory stick device) of the FRDM-KL25Z board
- the application will automatically run after the copy
