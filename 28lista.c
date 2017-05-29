#include <stdio.h>
#include <math.h>

struct coord{
	int x;
	int y;
};
	float dist;

int main(){
	
	struct coord p1;
	struct coord p2;

	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);

	dist = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));

	printf("%f\n", dist);

	return 0;	
}