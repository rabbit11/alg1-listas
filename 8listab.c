#include <stdio.h>

int main(){
	
	int t1, t2, i, t3, j;
	t3 = 0;

	for(i = 1; i <= 9; i++){
		t1 = i;
		for(j = 0; j <= 9; j++){
			t2 = j;
			t3 = t1 * t2;
			printf("%d x %d = %d\n", t1, t2, t3);
		}

	}return 0;
}