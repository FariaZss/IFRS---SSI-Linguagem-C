
/**
3 - Escreva um programa que leia o nome e a idade do usuário e retorne uma 
mensagem indicando se o usuário é maior de idade ou não.  Vamos considerar
18 anos completos.
Ex: "FULANO é maior de idade" ou "FULANO é Menor de idade"
**/

#include <stdio.h>
#include <string.h>

int main()
{
    char nomeUsuario[20];
    int idade;
    
    printf("Informe seu nome: ");
        scanf("%s", nomeUsuario);
    
    printf("Informe sua idade: ") ;
        scanf("%d", &idade);
        
    if (idade >= 18){
        printf("%s é maior de idade", nomeUsuario);      
    } else {
        printf("%s não é maior de idade", nomeUsuario);
    }

}


