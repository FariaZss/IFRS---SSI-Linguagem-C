

Exercício 2.  Leia 04 (quatro) notas de um aluno, a primeira tem peso 1, a segunda peso 2, a terceira peso 3, a quarta peso 4. Calcule a média e informe se o aluno foi aprovado ou não. Usar 'else'. Caso a nota seja menor que 7 ele será reprovado.
#include <stdio.h>




int main(){
    
float nota1, nota2, nota3, nota4, media;
    
printf("Digite a primeira nota do aluno:");
    scanf("%f", &nota1);


printf("Digite a segunda nota do aluno:");
    scanf("%f", &nota2);


printf("Digite a terceira nota do aluno:");
    scanf("%f", &nota3);


printf("Digite a quarta nota do aluno:");
    scanf("%f", &nota4);




media = ((nota1*1)+(nota2*2)+(nota3*3)+(nota4*4))/(1+2+3+4);
    
printf("\nSua média final é: %1.f", media);
    
if(media < 7){
    printf("\nVocê foi reprovado :( ");
    
} else if (media > 10) {
    printf("\nMédia incorreta");
} else {
  printf("\nVocê foi aprovado :D") ; 
} 
    
    
}





