#include <stdio.h>

int main(){

  int consultas[10000], consultasn, i, j, tacos = 0, k, contador = 0;

  scanf("%d", &consultasn);

  for(i = 0; i < consultasn; i++){
    scanf("%d", &consultas[i]);
    tacos = tacos + 2;
  }for( i = 0; i < consultasn; i++){
    for(j = consultasn; j > 0; j--){
      if(consultas[i] == consultas[j]){
        contador++;
      }
    }
  }tacos = tacos - (contador / 2);
  if(consultasn == 1){
    tacos = 1;
  }
  printf("%d\n", tacos);
  return 0;
}
