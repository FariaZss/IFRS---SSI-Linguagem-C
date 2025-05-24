

Exercício 5. Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
#include <stdio.h>


int main(){
    
int num1, num2, num3;


printf("\nInforme o primeiro número: ");
    scanf("%d", &num1);
printf("\nInforme o segundo número: ");
    scanf("%d", &num2);
printf("\nInforme o terceiro número: ");
    scanf("%d", &num3);
    
    
if ((num1 > num2) && (num1 > num3)){
    printf("O número %d é o maior entre as opções informadas", num1);
} else if ((num2 > num1) && (num2 > num3)){
    printf("O número %d é o maior entre as opções informadas", num2);
} else {
    printf("O número %d é o maior entre as opções informadas", num3);
}


}






