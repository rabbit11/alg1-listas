#include <stdio.h>

int main(){
	int n, m, x, i, j, flag, last1, last0;

	scanf("%d %d", &n, &m);

	for(i = 1, last1 = 0; i < n; i++){
		for(j = 1, flag = 0; j < m; j++){
			scanf("%d", &x);
			if(x != 0 && flag == 0){
				flag = 1;
				last1 = j; 
			}else if( x!= 0 && last1 > j){
				printf("N\n");
				break;
			}if(x != 0 && flag == 0 && j == m && last1 == 0){
				printf("N\n");
				break;
			}
		}
	}printf("S\n");
	return 0;
}