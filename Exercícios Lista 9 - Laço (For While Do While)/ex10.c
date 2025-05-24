#include <stdio.h>
#include <string.h>

int main() {
    int numero = 1;
    int count_incomoda = 0;
    int count_incomodam = 0;
    
    while (numero <= 10) {
        printf("%d elefante%s ", numero, numero > 1 ? "s" : "");
        
        if (numero == 1) {
            printf("incomoda muita gente\n");
            count_incomoda++;
        } else {
            if (numero % 2 == 0) {

                printf("incomodam");
                count_incomodam++;
                
                int i = 1;
                while (i < numero) {
                    printf(", incomodam");
                    count_incomodam++;
                    i++;
                }
                printf(" muito mais\n");
            } else {

                printf("incomodam muita gente\n");
                count_incomodam++;
            }
        }
        numero++;
    }
    
    printf("\n");
    

    numero = 10;
    while (numero >= 1) {
        printf("%d elefante%s ", numero, numero > 1 ? "s" : "");
        
        if (numero == 1) {
            printf("incomoda muito menos\n");
            count_incomoda++;
        } else {
            if (numero % 2 == 1) {

                printf("incomodam");
                count_incomodam++;
                
                int i = 1;
                do {
                    printf(", incomodam");
                    count_incomodam++;
                    i++;
                } while (i < numero);
                printf(" muito menos\n");
            } else {

                printf("incomodam muita gente\n");
                count_incomodam++;
            }
        }
        numero--;
    }
    

    printf("\nContagem:\n");
    printf("'incomoda' aparece %d vezes\n", count_incomoda);
    printf("'incomodam' aparece %d vezes\n", count_incomodam);
    
    return 0;
}


