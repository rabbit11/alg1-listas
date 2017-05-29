#include <stdio.h>

int main (){

int linhas, colunas, i, j, a, x, u;
char resposta = 'S';
x = 0; u = 0;

	scanf("%d", &linhas);
	scanf("%d", &colunas);

	for( i = 0; i <= linhas; i++, x = 0){

		for( j = 1; j <= colunas; j++){
			scanf("%d", &a);

			if( a != 0 && x == 0){
			
				if(j <= u){
					resposta = 'N';
				}else{
					u = j;
					j = 1;
				}
			}
			else if( x == 0 && u == colunas){
			j = colunas;
			}
		}
	}printf("%c\n", resposta);
	
}