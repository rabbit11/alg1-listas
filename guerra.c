#include <stdio.h>

int main(){

  int secoes[1000], comprimento, i, j = 0, k, n, total = 0, half, totalhalf = 0;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &secoes[i]);
    total = total + secoes[i];
  }half = total / 2;
    for(k = 1; k < n - 1; k++){
    totalhalf = totalhalf + secoes[k];
    if(totalhalf > half){
      break;
    }
  }
  printf("%d\n", k);
  return 0;
}
