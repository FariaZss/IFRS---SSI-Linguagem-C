/******************************************************************************

Múltiplos de 3 com DO WHILE decrescente
Escreva um programa que imprima os múltiplos de 3 entre 1 e 20, em ordem decrescente, utilizando o laço do while.
Dica: comece de 18 e vá até 3.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int count=20;
    
       printf("Múltiplos de 3 em intervalo entre 1 e 20: ");


    do{
        if(count % 3 == 0 ){
            printf("%d ", count);
        
        }
    
        count--;
        
    } while((count < 20) && (count >= 1));
   
}


