

Exercício 7.  Calcule o IMC. De acordo com (b), o IMC=peso em kilos dividido pela altura (em metros) ao quadrado.
(a) https://www.mdsaude.com/obesidade/calcule-o-seu-peso-ideal-e-imc/
(b)https://www.programasaudefacil.com.br/calculadora-de-imc
Leia a altura (em metros) e o peso em kilos de uma pessoa, calcule o IMC e indique a situação de acordo com a tabela em (a). (Abaixo do peso, peso ideal, sobrepeso, obesidade I, II, III)


#include <stdio.h>
#include <math.h>

int main(){

float peso, altura, imc;

printf("Informe seu peso (em quilos): ");
    scanf("%f", &peso);

printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);
    

imc = peso/pow(altura,2);

printf("Seu imc é: %2.f ", imc);

if(imc < 16){
    printf("\nBaixo peso muito grave");
} else if ( imc > 16 && imc < 16.99){
    printf("\nBaixo peso grave");
} else if ( imc > 17 && imc < 18.49){
    printf("\nBaixo peso");
} else if ( imc > 18.50 && imc < 24.99){
    printf("\nPeso normal");
} else if ( imc > 25 && imc < 29.99){
    printf("\nSobrepeso");
} else if ( imc > 30 && imc < 34.99){
    printf("\nObesidade grau I");
} else if ( imc > 35 && imc < 39.99){
    printf("\nObesidade grau II");
} else {
    printf("\nTa quase morrendo, mas o importante é ta vivo :'( ");
}

}
