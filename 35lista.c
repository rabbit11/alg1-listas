#include <stdio.h>
#include <stdlib.h>

struct coord{
	int x1;
	int y1;
	int x2;
	int y2;
};

int main(){
	
	struct coord ret1;
	struct coord ret2;
	struct coord inter;
	//int dif1x,dif1y,dif2x,dif2y;

	scanf("%d %d %d %d", &ret1.x1, &ret1.y1, &ret1.x2, &ret1.y2);
	scanf("%d %d %d %d", &ret2.x1, &ret2.y1, &ret2.x2, &ret2.y2);

	inter.x1 = abs(ret1.x1 - ret2.x1);
	inter.y1 = abs(ret1.y1 - ret2.y1);
	inter.x2 = abs(ret1.x2 - ret2.y2);
	inter.y2 = abs(ret1.y2 - ret2.y2);

	printf("(%d,%d) (%d,%d)\n", inter.x1, inter.y1, inter.x2, inter.y2);

	return 0;
}