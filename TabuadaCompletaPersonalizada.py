while True:
    try:
        num = int(input("Qual número você quer ver a tabuada? "))
        print(f"\nTabuada do {num}:")
        for i in range(1, 11):
            print(f"{num} × {i:2} = {num*i:3}")
        print()
    except:
        print("Digite um número inteiro válido.")
    
    while True:
        continuar = input("Deseja ver a tabuada de outro número? (1 = sim / 0 = não): ")
        if continuar in ['0', '1']:
            break
        print("Digite apenas 0 ou 1.")
    
    if continuar == '0':
        print("Programa encerrado.")
        break
