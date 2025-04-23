#Exercício 6: Crie um algoritmo que mostre os 10 primeiros números primos

num = 1

primo=[]


while num<=10: 
    if(num%2==1 and num!=9) or (num%3==1 and num!=4):
        print(num)
    
    num += 1 

