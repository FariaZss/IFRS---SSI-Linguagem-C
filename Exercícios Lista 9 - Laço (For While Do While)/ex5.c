/******************************************************************************

Contagem com decremento
Escreva um programa que imprima os números de 1 a 10 na tela, em ordem crescente, 
utilizando um comando for com decremento (ou seja, for(i = 10; i > 0; i--)).
Dica: use a imaginação para inverter a lógica do laço e fazer a contagem correta.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 0;
    
    //for count - ordem descrescente com decremento
    for(int count=10;count>0;count--){
        
        //Soma N+1
        if((n <= count) || (n >= count)){
           n++;
            //printf("\tContador %d | %d Número\n", count, n);
            printf("%d \n", n);
        } 
        }
    }


