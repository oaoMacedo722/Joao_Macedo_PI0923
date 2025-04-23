#Elabore um programa que escreva no ecrã todas as linhas de código ASCII(0 a 255) e o código correspondente. 
# Dispor de 20 em 20 com a condição de continuação ou saída do programa

for i in range(256):
    print(f"Codigo ascii: {i}")

    if (i + 1) % 21 == 0:
        escolha = input("Carrega no enter para continuar ou 's' para sair: ")
        if escolha == 's' or escolha  == 'S':
            print("Saindo...")
            break


