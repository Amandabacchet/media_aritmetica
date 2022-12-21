#include <stdio.h>
int main(){

    float dep, tax, ren, tot;

    /*primeiro trimestre*/
    printf("informe o valor do deposito:");
    scanf("%f", &dep);
    /*segundo trimestre*/
    printf("informe a taxa de juros:");
    scanf("%f", &tax);

    /*calculo do rendimento*/
    ren = dep * (tax/100);
    tot = dep + ren;

    /*apresentaçao ao cliente*/
    printf("o rendimento é: %.2f", ren);
    printf("o valor total é: %.2f", tot);

    return 0 ;
    
}