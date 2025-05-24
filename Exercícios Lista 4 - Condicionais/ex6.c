



Exercício 6. Faça um programa que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo. Ex: 'O número 2 é par e é positivo'.
#include <stdio.h>


int main(){
    
int numPar;


printf("Informe o número: ");
    scanf("%d", &numPar);




if ((numPar % 2 == 0) && (numPar >= 0)){
    printf("O número %d é par e é positivo", numPar);
} else if ((numPar % 2 == 0) && (numPar < 0)){
    printf("O número %d é par e é negativo", numPar);
} else if ((numPar % 2 != 0)  && (numPar >= 0)){
    printf("O número %d é ímpar e é positivo", numPar);
} else if ((numPar % 2 != 0) && (numPar < 0)){
    printf("O número %d é ímpar e é negativo", numPar);
}   


}
