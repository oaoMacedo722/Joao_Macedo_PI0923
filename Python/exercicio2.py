#Exercício 2: Ler 10 números, e determinar se o número par e número impar.

count= 0 


while count< 10: 
    num= int(input("escreva um numero: "))
    count += 1 
    if num % 2 == 0:
        print("numero é par")
    elif num % 2 != 0: 
        print("numero é impar")