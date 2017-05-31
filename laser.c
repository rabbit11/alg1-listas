#include <stdio.h>

int main(){

int altura, comprimento, altf[100000], i, j, ligado = 0;

  for(i = 0; i < 10000; i++){
    ligado = 0;
    scanf("%d %d", &altura, &comprimento);
    if(altura == 0 && comprimento == 0){
      break;
    }else{
      for(j = 0; j < comprimento; j++){
        scanf("%d", &altf[i]);
        if(altf[i != 0]){
          ligado++;
        }
      }printf("%d\n", ligado);
    }
  }
  return 0;
}
