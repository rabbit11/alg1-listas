#include <stdio.h>

int main(){

float notas[100], media = 0, menor = 100, maior = 0;
int i,j;

for(i = 0; i < 5; i++){
  scanf("%f", &notas[i]);
    if(notas[i] >= maior){
      maior = notas[i];
    }if(notas[i] <= menor){
      menor = notas[i];
    }media = media + notas[i];

}media += -(menor + maior);
printf("%.1f\n", media);

return 0;
}
