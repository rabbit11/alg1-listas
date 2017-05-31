#include <stdio.h>

int main(){

  int rotulos [10000], tipos, i, j, nrotulo, possiveis = 0, lasttipo = 0, k = 0, l = 0;

  scanf("%d %d", &nrotulo, &tipos);

  for(i = 0; i < nrotulo; i++){
    scanf("%d", &rotulos[i]);
      for(j = 0; j <= tipos; j++){
        if(rotulos[i] == j){
          if(lasttipo != j){
            lasttipo = j;
            k = 1;
          }else{
            k++;
            l++;
          }
        }
    }
  }printf("%d\n", k);
  return 0;
}
