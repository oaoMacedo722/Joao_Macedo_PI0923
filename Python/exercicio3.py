nomes=[]
para = True 

while para : 
  print("1 - Introduzir nomes")
  print("2 - Listar nomes na lista")
  print("3 - Parar programa")
  escolha=int(input(">>"))


  
  match escolha: 
    case 1: 
        nomes.append(input("Novo nome: "))
        for i in nomes: 
          dec = input("quer continuar [S] ou [N]: ")
          if dec == "n" or dec == "N": 
            break
          nomes.append(input("Novo nome: "))
    case 2: 
      print(nomes)
    case 3:
      while para : 
        dec = input("quer para o programa [S] ou [N]: ")
        if dec == "N" or dec == "n": 
          para = False  