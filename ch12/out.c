#include <stdio.h>

void outfinction() {
	extern int global, sglobal;

	printf("\t\t%d\n", ++global);
}