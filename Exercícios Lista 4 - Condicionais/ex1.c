Exercício 1.  Leia 03 (três) notas de um aluno, calcule sua média. Caso a média seja menor que 7 ele será reprovado. Apresente a média calculada e a situação (aprovado ou reprovado).
#include <stdio.h>


int main(){




float nota1, nota2, nota3, media;




printf("Informe a primeira nota:");
    scanf("%f", &nota1);
printf("Informe a segunda nota:");
    scanf("%f", &nota2);
printf("Informe a terceira nota:");
    scanf("%f", &nota3);




media = (nota1 + nota2 + nota3) / 3;


printf("Sua media é:%2.f", media);


if (media < 7){
	printf("\nVocê foi reprovado :( ");
} else {
    printf("\nVocê foi aprovado :) ");
}
    
}


