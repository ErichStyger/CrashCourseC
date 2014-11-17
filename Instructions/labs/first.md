# First steps

---

[Back](../instructions.md)

## Compile your own program
* Write your program in the folder "Content"
* Open a command line prompt -> Start > cmd
* Change the directory to the directory of your program 
  -> `cd Path\to\your\directory\copied\from\explorer`
* Compile your program using the buildscript -> buildapp.bat
* Check for errors in the output

## Flash your compiled program to the FRDM-KL25Z
* Connect your FRDM-KL25Z to your comnputer
* It should automatically be recogniced as mass storrage device
* Change to the "obj" subfolder in "Content"
* There you should find a file called "application.s19"
* Copy this file to your FRDM-KL25Z
  -> Right click on file -> Send to -> FRDM-KL25Z

## Communicate with your FRDM-KL25Z
* Ensure your board has an updated bootloader. If you got the board during the course this is done for you
* Download a program to your FRDM-KL25Z, that communicates with your computer
  -> e.g. the example for printf in the folder "Labs\PrintF"
* Open the device manager -> Start > Settings > Device manager
* Check on which COM port your device is connected
* Open termite from the folder "Software\Termite\termite" or any other terminal program
* Select the COM port of your device and a baud rate of 38400 Baud. 
* Connect if not already connected

