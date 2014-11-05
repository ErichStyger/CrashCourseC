# Installation
The goal is that you have all the necessary tools and drivers installed.

You need the following:

* [FRDM-KL25Z](http://www.freescale.com/webapp/sps/site/prod_summary.jsp?code=FRDM-KL25Z) board.
* Mini USB Cable.
* Course files on a memory stick or from a shared network location. This is basically a snapshot of this repository with the toolchain and setup programs.
* A host machine (Windows, Linux, Mac might be possible too).

> The FRDM-KL25Z boards already have the latest firmware loaded. 
> If you have your own board, follow the [Illustrated Step-by-Step Instructions: Updating the Freescale Freedom Board Firmware](http://mcuoneclipse.com/2014/11/01/illustrated-step-by-step-instructions-updating-the-freescale-freedom-board-firmware/)

## Software Installation
* Install the PEMicro drivers from the folder Software/OpenSDA or download it from [PEMicro OpenSDA](https://www.pemicro.com/opensda/) (registration required).
* Plugin the bord with the USB connector labeled 'OpenSDA' (if you look at the board from the USB port side, this is the port on the right hand side).
* The board shall enumerate, drivers will be automatically installed, and the board shall show up as a MSD (Mass Storage Device) drive (FRDM-KL25Z).
* Install a terminal program. You can use Termite in Software/Termite or download if from [CompuPhase](http://www.compuphase.com/software_termite.htm)
* Connect to your board with the COM port of the board. On Windows, the board and port should be listed in the Device Manager as 'OpenSDA - CDC Serial Port'. The labs use a baud of 38400, 8N1
* In the Termite/Terminal settings, make sure you have 'local echo' enabled, with 'Append CR' for transmitting text

> There is a Windows problem with disconnecting the board while having the COM port open in the terminal program.
> Close the port, then unplug the board, plug it in again and then open the COM port again.

## Test the board
* Copy the file **Labs/BlinkRedLED/BlinkRedLED.s19** to your board: it shall blink the red LED
* Copy the file **Labs/Printf/PrintF.s19** to your board: it shall blink the blue LED and write text to your terminal

*Congratulations, you board is working!*

## Building the library
Follow the steps in [Building the Library](buildingLibrary.md).

## Building the first program
Follow the steps in [My First Program](myFirstProgram.md).
