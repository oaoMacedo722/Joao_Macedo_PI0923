#include <stdio.h>
int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("escreva o primeiro numero: ");
    scanf("%d",&num1);
    printf("escreva o segundo numero: ");
    scanf("%d",&num2);
    printf("escreva o terceiro numero: ");
    scanf("%d",&num3);

    if(num1>num2){
        if(num2>num3){
            printf("%d %d %d", num3, num2, num1);
        } else{
            if(num1>num3){
                printf("%d %d %d", num2, num3, num1);
            }
            else{
                    printf("%d %d %d", num2, num1, num3);
            }
        }
    } else{
        if(num2>num3){
            if(num1>num3){
                printf("%d %d %d", num3, num1, num2);
            } else{
                printf("%d %d %d", num1, num3, num2);
            }
        } else{
            printf("%d %d %d", num1, num2, num3);
        }
    }

    printf("\nOrdem decrescente: ");

    if(num1>num2){
        if(num2>num3){
            printf("%d %d %d", num1, num2, num3);
        } else{
            if(num1>num3){
                printf("%d %d %d", num1, num3, num2);
            }
            else{
                    printf("%d %d %d", num3, num1, num2);
            }
        }
    } else{
        if(num2>num3){
            if(num1>num3){
                printf("%d %d %d", num2, num1, num3);
            } else{
                printf("%d %d %d", num2, num3, num1);
            }
        } else{
            printf("%d %d %d", num3, num2, num1);
        }
    }
}

