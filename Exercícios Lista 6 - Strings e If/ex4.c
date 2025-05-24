/**
 *
 * 4 - FaC'a um programa que leia as notas de 2 provas e um trabalho e o
 * numero de faltas. Calcule a mC)dia aritmC)tica. E indique o conceito:

A para (8.0 a 10),
B para (7.0 a 7.9),
C para (6.0 a 6.9),
D para (0.0 a 5.9)
E para reprovado por faltas. Maior ou igual a 5.
Escreva "Reprovado" ou "Aprovado".

calculo = (notaProva1 + notaProva2 + trabalho) / 3

faltas > 4
**/
#include <stdio.h>

int main()
{
    char nomeAluno[100];
    float notaProva1, notaProva2, trab, media;
    int faltas;

    printf("\nInforme o nome do Aluno: \n");
    scanf("%s", nomeAluno);

    printf("\nInforme a quantidade de faltas do aluno: \n");
    scanf("%d", &faltas);

    printf("\nInforme a nota da primeira prova: \n");
    scanf("%f", &notaProva1);

    printf("\nInforme a nota da segunda prova: \n");
    scanf("%f", &notaProva2);
    
    printf("\nInforme a nota do trabalho: \n");
    scanf("%f", &trab);

    media = (notaProva1 + notaProva2 + trab) / 3;

    if(media > 10){
        printf("Média incorreta, recalcule");
    }

    if(faltas > 4){
        printf("A media final do aluno é %f", media);
        printf("\nConceito E\n");
        printf("\nAluno reprovado por falta :( \n");
    } else if(media < 6.0){
        printf("A media final do aluno é %f", media);
        printf("\nConceito D\n");
        printf("\nAluno reprovado :'( \n");
    } else if(media < 6.9 ){
        printf("A media final do aluno é %f", media);
        printf("\nConceito C\n");
        printf("\nAluno em recuperacao :( \n");
    } else if(media < 7.9 ){
        printf("A media final do aluno é %f", media);
        printf("\nConceito B\n");
        printf("\nAluno aprovado :D \n");
    } else{
        printf("\nConceito A\n");
        printf("\nAluno aprovado :D \n");
    }
}   






