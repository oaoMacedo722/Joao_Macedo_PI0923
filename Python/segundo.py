'''
num = [0,1,2,3,4,5]

num.append(7)
print(num)

num.insert(0,8)
print(num)

nomes = ["daniel"]

for nome in nomes :
    print(nome)

nomes = []

for nome in nomes:
     nome.append(input("insira o seu nome"))'''

nomes = []
para = True

while para : 
    dec = input("quer continuar S ou N")
    if dec == "S" or dec == "s": 
        para = False
        continue
    nomes.append(input("ESCREVE DANIEL CORDEIRO: "))

print(nomes)