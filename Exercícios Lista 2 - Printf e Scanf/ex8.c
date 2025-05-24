8. Equidade: Léia e Luke são irmãos e dividem um apartamento alugado. 
O salário de Luke é R$2.000,00 o salário de Léia é de R$4.000,00. 
O valor do aluguel é de R$1.000,00. 
Para que a divisão do valor tenha equidade, Luke deve pagar 1/3 e Léia deve pagar 2/3. 
Para calcular essa proporção, basta dividir o salário de cada um pela soma dos salários.
Proporção Luke será de 2000/6000 = 1/3
Proporção Léia será de 4000/6000 = 2/3
Valor a pagar no aluguel: Luke R$333,33 Léia=R$666,67
Escreva um programa que, leia o salário de 2 pessoas e o valor da conta a ser dividida. Apresente quanto cada um deve pagar em uma divisão com equidade.
variaveis = Sal1 - Sal2 - Aluguel - totalSal - calc1 - calc2


#include <stdio.h>




int main()
{




float Sal1, Sal2, SalTotal, Aluguel, Calc1, Calc2;


    printf("Informe o salario da pessoa 1:");
    scanf("%f", &Sal1);
    printf("Informe o salario da pessoa 2:");
    scanf("%f", &Sal2);
    printf("Informe o valor do aluguel:");
    scanf("%f", &Aluguel);
    
    SalTotal = Sal1 + Sal2;
    
    Calc1 = (Sal1/SalTotal)*Aluguel;
    Calc2 = (Sal2/SalTotal)*Aluguel;
    
    printf("O valor a ser pago pela pessoa 1 é:%f", Calc1);
    printf("O valor a ser pago pela pessoa 2 é:%f", Calc2);


}




