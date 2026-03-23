numero_secreto = 37
tentativas = 0

print("Adivinhe o número secreto (entre 1 e 100)")

while True:
    try:
        palpite = int(input("Seu palpite: "))
        tentativas += 1
        
        if palpite == numero_secreto:
            print(f"Parabéns! Você acertou em {tentativas} tentativas!")
            break
        elif palpite > numero_secreto:
            print("Muito alto!")
        else:
            print("Muito baixo!")
            
    except:
        print("Digite apenas números inteiros.")
