#include <stdio.h>

int main () {
	int p, d1, d2, soma;
	
	scanf("%d", &p);
	scanf("%d", &d1);
	scanf("%d", &d2);
	soma = d1 + d2;
	
	if (soma % 2 == 0) {
		if (p == 0) {
			printf("0\n");
		} else {
			printf("1\n");
		}
	}
	if (soma % 2 != 0) {
		if(p == 0) {
			printf("1\n");
		} else {
			printf("0\n");
		}
	}

return 0;
}
