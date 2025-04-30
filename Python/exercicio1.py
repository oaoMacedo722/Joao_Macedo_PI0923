#Exercício 1: Crie um algoritmo que mostre os 30 primeiros números ímpares e pares.

num = 0 

par=[]
imp=[]

while num<30: 
    if num % 2 == 0: 
        par.append(num)
    elif num % 2 != 0:
        imp.append(num)
    num += 1 

print(imp)
print(par)
print(num)