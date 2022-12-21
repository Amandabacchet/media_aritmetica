#include <stdio.h>
int main(){

    int num;

    printf("digite um numero");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    printf("\n janeiro");
    break;
    case 2:
    printf("\n fevereiro");
    break;
    case 3:
    printf("\n março");
    break;
    case 4:
    printf("\n abril");
    break;
    case 5:
    printf("\n maio");
    break;
    case 6:
    printf("\n junho");
    break;
    case 7:
    printf("\n julho");
    break;
    case 8:
    printf("\n agosto");
    break;
    case 9:
    printf("\n setembro");
    break;
    case 10:
    printf("\n outubro");
    break;
    case 11:
    printf("\n novembro");
    break;
    case 12:
    printf("\n desembro");
    break;
    
    default: printf("mes invalido");
        break;
    }
    
    return 0 ;
    
}