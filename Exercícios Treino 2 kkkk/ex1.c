/*1. Faça um programa em "C" que lê dois valores e imprime:
 - se o primeiro valor for menor que o segundo, a lista de valores do primeiro até
o segundo;
 - se o primeiro valor for menor que o segundo a lista de valores do segundo até
o primeiro em ordem decrescente;
 - se ambos forem iguais a mensagem "valores iguais".*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int x, y;

    printf("Digite um valor para X: \n");   scanf("%d", &x); 
    printf("Digite um valor para Y: \n");   scanf("%d", &y);

    if(x < y){
        printf("Os valores de X até Y\n");
        for(int i=x;i<=y;i++){
            printf("%d \n", i);
        }
    } else if(x > y){
        printf("Os valores de Y até X\n");
        for(int i=x;i>=y;i--){
            printf("%d \n", i);
        }
    } else {
        (x == y); printf("Os valores são iguais!");
    }
    
    return 0;
}