try:
    inicial = float(input("Valor inicial (R$): "))
    taxa = float(input("Taxa de juros anual (%): "))
    anos = int(input("Número de anos: "))
except:
    print("Dados inválidos.")
    exit()

juros = taxa / 100
montante = inicial

print("\nEvolução do investimento (juros simples):")
for ano in range(1, anos + 1):
    montante += inicial * juros   # juros simples
    # montante *= (1 + juros)     # descomente para usar juros compostos
    print(f"Ano {ano:2}: R$ {montante:,.2f}")
