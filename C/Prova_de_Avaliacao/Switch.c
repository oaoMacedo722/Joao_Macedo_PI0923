//Exerc�cio switch: Ler para uma vari�vel INTEIRA um n�mero de 1 a 12 e mostrar o nome do m�s correspondente. Caso o m�s n�o existir, mostrar essa informa��o.

#include <stdio.h>
int main(){
    int num =0;
    printf("escreva um numero: ");
    scanf("%d", &num);

if (num<=12){
    switch (num){
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Mar�o");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
    }
}else
    printf("o mes nao existe");

}
