#Exercício 3: Ler a nota de 10 alunos, calcular a media e mostrar essa média.

cont=1 


while cont<=10: 
    notas=int(input("Escreve uma nota")) 
    cont += 1 

media = notas /10 
print(media)