#include <stdio.h>
int main(){
    int nota1 = 0;
    int nota2 = 0;
    int nota3 = 0;
    int nf1 = 0;
    int nf2 = 0;
    int nf3 = 0;

    printf("Escreva a primera nota: ");
    scanf("%d", &nota1);
    printf("Escreva a segunda nota: ");
    scanf("%d", &nota2);
    printf("Escreva a terceira nota: ");
    scanf("%d", &nota3);

    nf1 == (nota1 *2) /10;
    nf2 == (nota1 *3) /10;
    nf3 == (nota1 *5) /10;

    int nff = (nf1+nf2+nf3 )/ 3;

    if(nff>=6){
        printf("APROVADO");
    }else{
    printf("REPROVADO");
    }
}

