#include <stdio.h>

// função que dá a soma dos arrays
void uniao(int tam1, int tam2, int tam3, int vet1[tam1], int vet2[tam2], int vet3[tam3]){

for (int i=0; i< tam3; i++){
  vet3[i] = 0;
}

int k= 0;
for (int i= 0; i< tam1; i++)
  vet3[i]= vet1[i];

for (int i=tam1; i< tam3; i++){
  vet3[i] = vet2[k];
  k++;
  }

}
/*
// função que ordena o array resultante

void ordena(int tam, int vet[tam]){
  for(int i= 0; i< tam-1; i++){
    for(int j= i+ 1; i< tam; j++){
      if(vet[i] > vet[j]){
        int aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
      }
    }
  }
}*/

int main () {



int tam1, tam2;
int k= 0;

// le tamanho do array e cria 
scanf ("%d", &tam1);
int vet1[tam1];
// le tamanho do array e cria
scanf ("%d", &tam2);
int vet2[tam2];
// calcula tamanho do 3 array e cria
int tam3= tam1 + tam2;
int vet3[tam3];

// atribui array 1
for (int i=0; i< tam1; i++){
  scanf("%d", &vet1[i]);
}
// atribui array 2
for (int i=0; i< tam2; i++){
  scanf("%d", &vet2[i]);
}

// chama função que vai unir os arrays
uniao (tam1, tam2, tam3, vet1, vet2, vet3);


/*
ordena (tam3, vet3);
*/

for (int i=0; i< tam3; i++ ){
  printf("%d ", vet3[i]);
}


  return 0;
}