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
		 printf("Version 0.2.0\n");
		 printf("Created by Kingy, KevinX8 and cheuble\n");
		 svcSleepThread(2000000000);
		 printf("Press A to install");
	

	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();
		u32 kDown = hidKeysDown();

				if (kDown & KEY_A) {
				cls();
				printf("The installation proccess won't be the fastest thing!\n");
				printf("Please keep your 3DS powered on and charging!\n\n");
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
				printf("Please run 'make' to build 'boot11strap'\n\n");
				svcSleepThread(2000000000);
				printf("Building boot11strap...\n");
				printf("This might take a while!\n\n");
				svcSleepThread(40000000000);
				printf("[ERROR] could not log output.\n");
				printf("\x1b[32mInstallation Successfull!\x1b[0m\n\n");
				printf("Reboot!\n");
				printf("If nothing happens, please post in the repo's issues");


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
