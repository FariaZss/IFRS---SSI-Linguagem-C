 
Exercício 4. - Escreva um programa que, dada a idadede um nadador,
classifique-o em uma das seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = 18 anos ou mais
(NÃO USAR SWITCH)


#include <stdio.h>


int main(){


int idade, rank;




printf("Informe a idade do nadador: ");
scanf("%d", &idade);


if (idade >= 5 && idade <= 7){
    printf("O nadador tem %d anos, e está classificado para a categoria infantil A ", idade);
} else if (idade >= 8 && idade <= 10 ){
    printf("O nadador tem %d anos, e está classificado para a categoria infantil B ", idade);
} else if (idade >= 11 && idade <= 13 ){
    printf("O nadador tem %d anos, e está classificado para a categoria juvenil A ", idade);
} else if (idade >= 14 && idade <= 17 ){
    printf("O nadador tem %d anos, e está classificado para a categoria juvenil B ", idade);
} else if (idade >= 18){
    printf("O nadador tem  %d anos, e está classificado para a categoria Adulto ", idade);
} else 
     printf("O nadador tem %d anos, portanto não possui idade suficiente para entrar na classificação. ", idade);
}
