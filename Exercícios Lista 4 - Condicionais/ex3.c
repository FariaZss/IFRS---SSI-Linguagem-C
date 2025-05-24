
Exercício 3.  Faça um programa que leia a média do aluno e seu numero de faltas. se as faltas forem maior ou igual a 5, escreva 'reprovado por faltas'. Se a média for menor que 7, foi reprovado por média. Senão, escreva 'Parabéns! você foi aprovado'.


#include <stdio.h>


int main(){
    
    float nota1, nota2, nota3, media;
    int falta;
    char nomeAluno[101];
    
    printf("Digite o nome do aluno: ");
    scanf("%s", nomeAluno);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);
    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%d", &falta);




    




    media = (nota1+nota2+nota3)/3;
    
    printf("\nA média final do aluno %s é %2.f", nomeAluno, media);
    printf("\nO %s faltou %d vezes", nomeAluno, falta);
    
    if(falta >= 5 && media < 7) {
        printf("\nAluno reprovado por média e por falta :( ");
    } else if(media > 10){
        printf("\nMédia incorreta :( Recalcule as notas. ");
    } else if (media < 7) {
        printf("\nAluno reprovado por média :( ");
    } else if(falta >= 5){
        printf("\nAluno reprovado por faltas :( ");
    } else {
      printf("\nParabens! Aluno aprovado. ") ; 
    
}




}







