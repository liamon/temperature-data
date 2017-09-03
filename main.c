#include <stdio.h>
#include "tempdata.h"

int main(int argc, char *argv[]) {
	if (argc % 2 == 0) { // Checks if argc is even (it should be odd, towns and temperatures + executable name)
		puts("ERROR: Data entered incorrectly -- ending program");
		return 1;
	}

	saveFile(argc, argv);
	return 0;
}
