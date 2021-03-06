/*
 * mei_Constants.h
 *
 *  Created on: Mar 20, 2019
 *      Author: mark
 */

#ifndef MEI_CONSTANTS_H_
#define MEI_CONSTANTS_H_



#endif /* MEI_CONSTANTS_H_ */




#define MODEMDEVICE "/dev/ttyS1" //set the USBGPIO_Port
/* baudrate settings are defined in <asm/termbits.h>, which is
included by <termios.h> */
#define BAUDRATE B9600
#define MODEMDEVICE "/dev/ttyS1" //set the USBGPIO_Port
#define _POSIX_SOURCE 1 /* POSIX compliant source */
#define FALSE 0
#define TRUE 1
/* MEI Constants */

	// Byte 0 Status
int MEI_ACCEPTING = 0x02;
int MEI_ESCROW    = 0x04;
int MEI_STACKING  = 0x08;
int MEI_STACKED   = 0x10;
int MEI_RETURNING = 0x20;
int MEI_RETURNED  = 0x40;
	// Byte 1 Status
int MEI_CHEATED   = 0x01;
int MEI_REJECTED  = 0x02;
int MEI_JAM	   = 0x04;
int MEI_FULL	   = 0x08;
int MEI_CASSETTE  = 0x10;
	// Byte 2 Status
int MEI_POWERUP   = 0x01;
int MEI_FAILURE   = 0x04;
	// Byte 3 Status
int MEI_DOWNLOADING = 0x02;
	// Commands
int	unsigned MEI_POLL      = 0x10;
int	unsigned MEI_STACK     = 0x30;
int	unsigned MEI_RETURN    = 0x50;
	// Command Types
int	unsigned MEI_CMD       = 0x10;
//	unsigned MEI_REPLY     = 0x20;
int	unsigned MEI_DOWNLOAD  = 0x50;
int	unsigned MEI_AUX       = 0x60;
	// Auxiliary command sub-types
int	unsigned MEI_GETMODEL  = 0x04;
int unsigned MEI_GETSERIAL = 0x05;
int	unsigned MEI_GETBOOTVER	= 0x06;
int	unsigned MEI_GETAPPVER = 0x07;
int	unsigned MEI_GETVARNAME	= 0x08;
int	unsigned MEI_GETVERSION	= 0x09;
int	unsigned MEI_GETQP		= 0x0B;
int	unsigned MEI_GETPERF   =  0x0C;
int	unsigned MEI_GETBNF		= 0x10;
int	unsigned MEI_RESET		= 0x7F;
int	unsigned MEI_EXT       =  0x70;
	// Extension command sub-types
int	unsigned MEI_GETBILLS  =  0x02;
int	unsigned MEI_RETRIEVE  =  0x0B;
int	unsigned MEI_BOOKMARK  =  0x0D;
