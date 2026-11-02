/* Praktikum 3, Aufgabe 2 - HelloWorld.c
 *
 * A small Hello World programm.
 *
 * Compile: gcc -o HelloWorld HelloWorld.c
 * Execute: ./HelloWorld
 *
 * Sven Reissmann (sven.reissmann@rz.hs-fulda.de)
 */
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {
	if (argc < 2) {
		fprintf (stderr, "Usage: %s <# loops>\n", argv[0]);
		exit (EXIT_FAILURE);
	}

	int loops = atoi (argv[1]);
	for (int i = 0; i < loops; i++) {
		printf ("%d of %d: Hello World!\n");
	}
	exit (EXIT_SUCCESS);
}
