#include <string.h>
#include <3ds.h>
#include <stdio.h>

void cls() {
	printf("\e[1;1H\e[2J");
}

void version() {
	printf("0.3.0");
}

void reboot() { //Thanks cheuble!
	APT_HardwareResetAsync();
}
