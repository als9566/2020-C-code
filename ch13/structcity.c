#include <stdio.h>
#include <string.h>

struct position
{
	double latitude;
	double longitude;
};

int main(void) {

	struct city {
		char* name;
		struct position palce;
	};
	struct city seoul, newyork;
	seoul.name = "����";
	seoul.palce.latitude = 37.33;
	seoul.palce.longitude = 126.58;
	newyork.name = "����";
	newyork.palce.latitude = 40.8;
	newyork.palce.longitude = 73.8;

	printf("[%s] ����= %.1f �浵= %.1f\n", seoul.name, seoul.palce.longitude, seoul.palce.latitude);
	printf("[%s] ����= %.1f �浵= %.1f\n", newyork.name, newyork.palce.longitude, newyork.palce.latitude);

	return 0;
}