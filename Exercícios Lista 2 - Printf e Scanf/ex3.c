3 - Escreva um programa que leia 3 notas, calcule a média simples e escreva na tela;
#include <stdio.h>




int main()
{




float nota1, nota2, nota3, media;




printf("Informe um valor:");
scanf("%f", &nota1);
printf("informe outro valor:");
scanf("%f", &nota2);
printf("informe outro valor:");
scanf("%f", &nota3);




media = (nota1 + nota2 + nota3) / 3;




if (media > 10 || 0 > media) {
    printf("A nota é inválida");
    return 0;
}
    
printf("Resultado: %f", media);
}






