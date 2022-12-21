#include <stdio.h>
int main(){

    float n1, n2, n3, n4, med;

    /*primeiro trimestre*/
    printf("digite a nota do primeiro trimestre:");
    scanf("%f", &n1);
    /*segundo trimestre*/
    printf("digite a nota do segundo trimestre:");
    scanf("%f", &n2);
    /*terceiro trimestre*/
    printf("digite a nota do terceiro trimestre:");
    scanf("%f", &n3);
    /*quarto trimestre*/
    printf("digite a nota do quarto trimestre:");
    scanf("%f", &n4);

    /*calculo da media*/
    med = (n1 + n2 + n3 + n4) /4;

    /*apresentaçao da media */
    printf("a media é: %.2f \n", med);

    return 0 ;
    
}