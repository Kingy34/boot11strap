#include <string.h>
#include <3ds.h>
#include <stdio.h>

void cls() {
	printf("\e[1;1H\e[2J");
}

int main()
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
	aptInit();
    fsInit();
	
	     printf("Welcome to the boot11strap installer!\n");
		 printf("Version 0.1\n");
		 printf("Created by Kingy, KevinX8 and cheuble\n");
		 svcSleepThread(2000000000);
		 printf("Press A to install, or exit this application NOW");
	

	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();
		u32 kDown = hidKeysDown();

				if (kDown & KEY_A) {
				cls();
				printf("DO NOT SHUTDOWN; BACKING UP IS IN PROGRESS!\n");
				printf("Backing up System Resources...\n");
				svcSleepThread(10000000000);
				printf("ERROR: Could not read/write to the NAND (Corrupt?)\n");
				printf("Continuing without backup...\n");
				printf("Complete.\n");
				svcSleepThread(2000000000);
				printf("Installing boot11strap...\n");
				svcSleepThread(2000000000);
				printf("Install complete!\n");
				printf("Writing changes to NAND...\n\n");
				svcSleepThread(200000000);
				printf("Done!\n");
				printf("Success code: 'A9LH=B9S'\n");
				svcSleepThread(100000000);
				printf("Shutting down...");
				cls();
				printf("You may shut down your console.");
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
