#include <stdio.h>
int main(){
    int saldo = 0 ;
    int cheque = 0;
    int sc = 0;

    printf("Insira o seu saldo: ");
    scanf("%d", &saldo);
    printf("Digite o valor do cheque: ");
    scanf("%d", &cheque);

if(saldo>cheque){
      sc = saldo-cheque;
    printf("%d",sc);
}
else{
    printf("O valor nao pode ser descontado");
}




}

