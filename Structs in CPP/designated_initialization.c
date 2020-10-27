// program to implemented Designated initialization in C
#include<stdio.h>

struct Point {
	int x;
	int y;
};

int main() {
	struct Point p = {
		.x = 10,
		.y = 20
	};
	printf("%d %d", p.x, p.y);
	return 0;
}
