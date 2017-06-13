#include <stdio.h>

int altf[100001];

int main(){

int altura, comprimento, i, j, ligado = 0, alteracoes;

  for(i = 0; i < 100001; i++){
    ligado = 0;
    scanf("%d %d", &altura, &comprimento);
    if(altura == 0 && comprimento == 0){
      break;
    }else{
      for(j = 0; j < comprimento; j++){
        scanf("%d", &altf[j]);
        if(j >= 1 && altf[j - 1] == altura && altf[j] != altura){
          ligado += altura - altf[j];
        }else if(altf[j] != altura){
          ligado ++;
        }
      }printf("%d\n", ligado);
    }
  }
  return 0;
}