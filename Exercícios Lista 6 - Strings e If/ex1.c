/**
 * 1 - escreva um programa que leia o nome do usuário e informe quantos
 * caracteres o nome ocupa (strlen). Informe a capacidade da variável com o comando sizeof.
**/

#include <stdio.h>
#include <string.h>

int main()
{
   char nomeUsuario[100];
   int sizeNome, memNome;
  
   
    printf("Informe o nome do usuário: ");
        scanf("%s", nomeUsuario);
    
    sizeNome = strlen(nomeUsuario);
    
    memNome = sizeof(nomeUsuario);
  
    printf("\nO nome do usuário possui %d caracteres \n", sizeNome);
    
    printf("\nO nome do usuário ocupa %d bytes de memoria \n", memNome);
  
}


