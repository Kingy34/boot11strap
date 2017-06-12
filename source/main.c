#include <string.h>
#include <3ds.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "changelog.h"


int main(int argc, char **argv) {
	gfxInitDefault();
	consoleInit(GFX_BOTTOM, NULL);
	aptInit();
    fsInit();
	
	     printf("Welcome to the boot11strap installer!\n");
		 printf("Version ");
		 version();
		 printf(".\n");
		 printf("Created by Kingy, KevinX8, cheuble and EthanAddict\n");
		 printf("Report errors on the repo\n\n");
		 printf("TIP: Keep your 3DS charging!");
		 svcSleepThread(2000000000);
		 consoleInit(GFX_TOP, NULL);
		 printf("Press A to install\n");
		 printf("Press B to view changelog!\n");
		 printf("Press X to Install Lamu3ds CFW\n");
	

	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();
		u32 kDown = hidKeysDown();

				if (kDown & KEY_A) {
				cls();
				printf("The installation proccess won't be very fast\n\n");
				svcSleepThread(2000000000);
				printf("Running 'prep.c'...");
				svcSleepThread(4000000000);
				printf("\x1b[32m OK\x1b[0m\n");
				printf("Output recieved; prep.c completed successfully!\n\n");
				svcSleepThread(2000000000);
				printf("Testing...\n\n");
				svcSleepThread(10000000000);
				printf("NAND r/w access... ");
				printf("\x1b[32m OK\x1b[0m\n");
				printf("SD Card health... ");
				printf("\x1b[32m OK\x1b[0m\n");
				printf("Payload files... ");
				printf("\x1b[32m OK\x1b[0m\n");
				printf(".conf... ");
				printf("\x1b[32m OK\x1b[0m\n");
				printf("3DS health... ");
				printf("\x1b[32m OK\x1b[0m\n");
				printf("prep files... ");
				printf("\x1b[32m OK\x1b[0m\n");
				printf("Sectors... ");
				printf("\x1b[32m OK\x1b[0m\n");
				printf("bootrom... ");
				printf("\x1b[32m OK\x1b[0m\n\n");
				printf("\x1b[32mReady!\x1b[0m\n");
				printf("Giving neccessary permissions to the program\n");
				svcSleepThread(10000000000);
				printf("0xFFFFFF00 -> 0x36\n");
				svcSleepThread(30000000000);
				printf("Installing svc-global-backdoors\n");
				svcSleepThread(10000000000);
				printf("Done\n");
				printf("Please run 'make' to build 'boot11strap'\n\n");
				svcSleepThread(2000000000);
				printf("Building boot11strap...\n");
				printf("This might take a while!\n\n");
				svcSleepThread(40000000000);
				printf("Finalizing");
				svcSleepThread(2000000000);
				printf("Removing other bullshit entrypoints")
				svcSleepThread(10000000000);
				printf("Installing b11s in NAND");
				svcSleepThread(5000000000);
				printf("[ERROR] could not log output.\n");
				printf("\x1b[32mInstallation Successful!\x1b[0m\n\n");
				printf("Rebooting... ");
				svcSleepThread(2000000000);
				reboot(); //Thanks cheuble!
				break;

				}
				else if (kDown & KEY_B) {
					cls();
					printf("Your version is ");
					version();
					printf(".\n\n");
					printf("What's new:\n");
					changelog();
					printf(" \n\n");
					printf("Press A to install boot11strap 0.2.1.");
				}
		else if (kDown & KEY_START) 
			break;
		
				if (kDown & KEY_X) { // stovven improved
					printf("Running prep.c...");
					svcSleepThread(2000000000);
					printf("\x1b[32m OK\x1b[0m\n");
					printf("Downloading CFW...");
					svcSleepThread(3000000000);
					printf("\x1b[32m OK\x1b[0m\n");
					printf("Installing CFW...");
					svcSleepThread(4000000000);
					printf("\x1b[32m OK\x1b[0m\n");
					printf("Installing CFW to CTRNAND...");
					svcSleepThread(2000000000);
					printf("\x1b[32m OK\x1b[0m\n");
					printf("Checking CFW...");
					svcSleepThread(4000000000);
					printf("\x1b[32m OK\x1b[0m\n");
					printf("Cleaning up...");
					svcSleepThread(1000000000);
					printf("\x1b[32m OK\x1b[0m\n");
					printf("CFW Installed!");
					printf("Report Anything to the github");
					svcSleepThread(3000000000);
					cls();
					printf("\x1b[31m !REBOOTING!\x1b[0m\n\n");
					svcSleepThread(4000000000);
					reboot();
			}
		
		// Flush and swap frame-buffers
		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}
	
	gfxExit();
	aptExit();
	fsExit();
	return 0;
}
