#include <stdio.h>
int main(){
    char nome[50];
    int valor = 0 , vd = 0;
    float descontos;
    

    printf("Escreva o seu nome: ");
    scanf("%s",&nome);
    printf("Escreva o valor da sua conta: ");
    scanf("%d", &valor);

    if(valor<=200){
        descontos = valor*0.10;
        vd = valor - descontos;
        printf("%s \n", nome);
        printf("%d", vd);
    }
    if(valor<=500){
        descontos = valor*0.15;
        vd = valor - descontos;
        printf("%s \n", nome);
        printf("%d", vd);
    }
    if(valor>500){
        descontos = valor*0.20;
        vd = valor - descontos;
        printf("%s \n", nome);
        printf("%d", vd);
    }

}
