while True:
    try:
        eleitores = int(input("Quantas pessoas vão votar? "))
        if eleitores > 0:
            break
        print("Digite um número maior que zero.")
    except:
        print("Digite um número inteiro válido.")

votos = [0, 0, 0, 0]  # índice 0 não usado, 1,2,3 para candidatos

for i in range(eleitores):
    while True:
        try:
            voto = int(input(f"Voto da pessoa {i+1} (1, 2 ou 3): "))
            if voto in [1, 2, 3]:
                votos[voto] += 1
                break
            else:
                print("Voto inválido! Digite 1, 2 ou 3.")
        except:
            print("Digite apenas 1, 2 ou 3.")

print("\nResultado da votação:")
print(f"Candidato 1: {votos[1]} votos")
print(f"Candidato 2: {votos[2]} votos")
print(f"Candidato 3: {votos[3]} votos")

vencedor = max(range(1,4), key=lambda x: votos[x])

if votos.count(votos[vencedor]) > 1:
    print("Houve empate entre os candidatos mais votados!")
else:
    print(f"O vencedor é o Candidato {vencedor} com {votos[vencedor]} votos!")
