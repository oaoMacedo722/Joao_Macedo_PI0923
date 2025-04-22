#include <stdio.h>
// Ler 10 números, e determinar o número par e numero impar….
int main(){
    int n;

    for(int i = 1; i<=10; i++){
            
        printf("Insira o numero %d: ", i);
        scanf("%d", &n);
    
        if(num % 2 == 0){
            printf("\n%d e um numero par.\n\n", n);
        } else {
            printf("\n%d e um numero impar.\n\n", n);
        }
    }

    return 0;

}
