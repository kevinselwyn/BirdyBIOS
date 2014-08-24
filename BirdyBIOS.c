#include <stdio.h>
#include <stdlib.h>

#define COMPANY          "Polytron"
#define COMPANY_FULL     "Polytron Systems Corporation, INC."
#define ALLY             "Laser Check (TM)"
#define BIOS             "BirdyBIOS"
#define BIOS_FULL        "PLYTRN PRTBLPRO2.0 Deluxe ACPI BIOS"
#define VERSION          "12.23b"
#define COPYRIGHT_YEAR   "2009-2010"
#define REVISION         "1008"
#define PROCESSOR        "PLY Powertron(tm) 23Mhz"
#define MEMORY           "640k"
#define FREQUENCY        "16 Mhz"
#define MODE             "Quad Channel"
#define PRIMARY_MASTER   "PLYTRN PL1000-23"
#define PRIMARY_SLAVE    "Empty"
#define SECONDARY_MASTER "PLYTRN DSK-100 Floppy Disk Drive"
#define SECONDARY_SLAVE  "Empty"
#define SETUP_KEY        "DEL"
#define FISH_KEY         "Alt-F2"
#define TIMESTAMP        "14/12/2009-Plytrn-PPP-2.0"

void copyright() {
	printf("%s -- %s - V%s, a %s Ally\n", COMPANY, BIOS, VERSION, ALLY);
	printf("Copyright (C) %s, %s\n\n", COPYRIGHT_YEAR, COMPANY_FULL);
	printf("%s Rev %s\n", BIOS_FULL, REVISION);
}

void processor() {
	printf("\nMain Processor : %s\n", PROCESSOR);
}

void memory() {
	printf("Memory Testing : %s OK\n", MEMORY);
}

void primary() {
	printf("\nMemory Frequency is at %s, %s mode\n", FREQUENCY, MODE);
	printf("  Primary Master : %s\n", PRIMARY_MASTER);
	printf("   Primary Slave : %s\n", PRIMARY_SLAVE);
}

void secondary() {
	printf("Secondary Master : %s\n", SECONDARY_MASTER);
	printf(" Secondary Slave : %s\n", SECONDARY_SLAVE);
}

void actions() {
	printf("\n\n\n\n\n\nPress %s to enter SETUP  ; press %s to enter FISH utility\n", SETUP_KEY, FISH_KEY);
	printf("%s\n", TIMESTAMP);
}

int main() {
	system("clear");
	copyright();

	sleep(1);
	processor();

	sleep(1);
	memory();

	sleep(1);
	primary();

	sleep(1);
	secondary();

	sleep(1);
	actions();

	sleep(2);
	system("clear");

	return 0;
}
