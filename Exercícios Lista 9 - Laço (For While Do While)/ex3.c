/******************************************************************************

Múltiplos de 3 com WHILE
Escreva um programa que imprima os múltiplos de 3 entre 1 e 20, em ordem crescente,
utilizando o laço while.
Dica: o primeiro múltiplo de 3 dentro do intervalo é o número 3.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, count=3;
    
       printf("Múltiplos de 3 em intervalo entre 1 e 20: ");

   while (count<=20){
       if(count % 3 == 0){
       
       printf("%d, ", count);
       count += 3;
       }
   }

    return 0;
}

