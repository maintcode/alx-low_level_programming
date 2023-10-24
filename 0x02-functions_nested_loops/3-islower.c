#include "main.h"

/**
 * Return 1 if successful
 * Returns 0 if not succesful
 * Main is entry point
 */

int _islower(int c) {
	if (c >= 'a' && c <= 'z') {
		return 1;
	} else {
		return 0;
	}
}
