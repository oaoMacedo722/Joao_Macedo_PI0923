#Exercício 9: Escreva um programa que solicite um número ao utilizador até que o valor deste esteja entre os valores 1 e 100.
#(Use o ciclo do ... while)




while True :
    num=int(input("escreva um numero"))
    
    if 1< num <100 : 
        print("o numero esta entre 1 e 100")
        break
    else : 
        print("o numero nao esta no intervalo de 1 e 100")
