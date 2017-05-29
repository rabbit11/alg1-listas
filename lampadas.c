#include <stdio.h>

int main()
{
int apertar, la, lb, i1, i2, contador, in;
	la = 0; 
	lb = 0;
	i1 = 0; 
	i2 = 0;
	in = 0;
	
	scanf("%d", &apertar);
	
	for(contador = 0; contador < apertar; contador++){
		scanf("%d", &in);
		
		if ( in == 1){
			i1 = i1 + 1;
		}else {
			i1 = i1 + 1;
			i2 = i2 + 1;
		}
	}
	
	if ( i1 % 2 == 0){
		printf("%d\n", la);
		
		}else{
			la = la + 1;
		printf("%d\n", la);

	}if ( i2 % 2 == 0){
		printf("%d\n", lb);
	}else{
		lb = lb + 1;
		printf("%d\n", lb);
	}
	return 0;
}