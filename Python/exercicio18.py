#Elabore um programa que leia uma entrada e diga quantos números perfeitos existem. 
# Exemplo de numero perfeito em que somando todos os divisores ele da o numero inicial.6=3+2+1 .
div = []

while True:
    try:
        num = int(input("Digite um número inteiro: "))
    except ValueError:
        print("Insira um numero valido")
        continue

    for i in range(1, num - 1):
        if (num % i == 0):
            div.append(i)
    
    if sum(div) == num:
        print(f"\nO numero é perfeito | Divisores: {div} | Soma dos divisores: {sum(div)}\n")
    else:
        print(f"\nO numero não é perfeito | Divisores: {div} | Soma dos divisores: {sum(div)}\n")
        
    break
