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
	seoul.name = "서울";
	seoul.palce.latitude = 37.33;
	seoul.palce.longitude = 126.58;
	newyork.name = "뉴욕";
	newyork.palce.latitude = 40.8;
	newyork.palce.longitude = 73.8;

	printf("[%s] 위도= %.1f 경도= %.1f\n", seoul.name, seoul.palce.longitude, seoul.palce.latitude);
	printf("[%s] 위도= %.1f 경도= %.1f\n", newyork.name, newyork.palce.longitude, newyork.palce.latitude);

	return 0;
}