#include <string.h>
#include <3ds.h>
#include <stdio.h>	

				void install_b11s() {
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
				printf("[Success] Logged output! Check your SD card!\n");
				printf("\x1b[32mInstallation Successful!\x1b[0m\n\n");
				printf("... "); //Thanks cheuble!
				}