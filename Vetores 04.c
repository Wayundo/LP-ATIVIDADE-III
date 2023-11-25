#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numeros[5];
    int i;
    int impar = 0;
    int numerosNegativos = 0;
    int maior = 0;
    int menor = 9999;
    int somaGeral = 0;
    float mediaGeral;
    int somaPar = 0;
    int par = 0;
    float mediaPar = 0;

    for (i = 0; i < 5; i++) {

        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

if (numeros[i] % 2 == 0){
    par++;
    somaPar+=numeros[i];
   }else{
   impar++;
}

 if (numeros[i] < 0){
     numerosNegativos++;
    }

 if (numeros[i] < menor){
    menor = numeros[i];
 }else if(numeros[i] > maior){
    maior = numeros[i];
  }

  if (numeros[i] > 0){
    somaGeral += numeros[i];
 
}
 if (par > 0) {
        mediaPar = somaPar / (float) par;
    }

}

 mediaGeral = somaGeral / i;


printf("\n Resultados: \n ");

        printf("\n Quantidade de números impares %d", impar);
        printf("\n Quantidade de números negativos %d", numerosNegativos);
        printf("\n Maior número:  %d", maior);
        printf("\n Menor número:  %d", menor);
        printf("\n Média de números Pares:  %2.f", mediaPar);
        printf("\n Média de números inseridos:  %2.f", mediaGeral);

   
    return 0;
}
