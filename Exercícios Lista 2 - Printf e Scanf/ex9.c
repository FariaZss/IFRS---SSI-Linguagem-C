

9 - Considerando que o aumento dos funcionários é de 75% do INPC e mais um percentual de produtividade discutido com a empresa. Construir um programa que lê o número do funcionário, seu salário atual, o valor do INPC e o índice de produtividade e escreve o número do funcionário, seu aumento e o valor de seu novo salário.
Aumento=Salario*0.75*INPC/100  +Salario*IndiceProdutividade/100
Salario Novo = Salario + Aumento  


variaveis = inpc - n° funcionario - salario atual - indice de produtividade 
escrever = n° funcionario - aumento - valor novo salario 

#include <stdio.h>

int main(){
    
    int IdFuncionario;
    float Inpc, SalAtual, SalNovo, IdcProd, Aumento;
    
    printf("Digite o N° ID do Funcionario: ");
        scanf("%d", &IdFuncionario);
    
    printf("Digite o salário atual do funcionário: ");
        scanf("%f", &SalAtual);
    
    printf("Digite o valor de INPC: ");
        scanf("%f", &Inpc);
        
    printf("Digite o Índice de Produtividade do funcionário : ");
        scanf("%f", &IdcProd);
        
    
    Aumento = (SalAtual*(0.75*Inpc)/100) + ((SalAtual*IdcProd)/100);
    
    SalNovo = SalAtual + Aumento;
    
    printf("O novo salário do funcionário %d é: %2.f", IdFuncionario, SalNovo);
    
}



