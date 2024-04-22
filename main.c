#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4
#define ALE 101

main() {
  int l, c, m[TAM][TAM], par;
  srand(time(NULL));
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(l % 2 != 0){
        do{
          m[l][c] = rand() % ALE;
          par = m[l][c] % 2;
        }while(par == 0);
      }
      else{
        do{
          m[l][c] = rand() % ALE;
          par = m[l][c] % 2;
        }while(par != 0);
      }
    }
  }
  printf("Matriz: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  getchar();
}