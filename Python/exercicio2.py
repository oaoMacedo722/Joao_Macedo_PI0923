num = int(input("insira um numero"))

if(num%2==0 and num!=2) or (num%3==0 and num!=3):
    print("Numero nao é primo")
else: 
    print("Numero é primo ")