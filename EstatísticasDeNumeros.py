cont_total = 0
cont_positivos = 0
cont_negativos = 0
soma = 0

print("Digite números (0 para encerrar)")

while True:
    try:
        num = float(input("→ "))
        if num == 0:
            break
            
        cont_total += 1
        soma += num
        
        if num > 0:
            cont_positivos += 1
        elif num < 0:
            cont_negativos += 1
            
    except:
        print("Valor inválido. Digite um número.")

print("\nEstatísticas:")
print(f"Total de números digitados : {cont_total}")
if cont_total > 0:
    print(f"Números positivos          : {cont_positivos}")
    print(f"Números negativos          : {cont_negativos}")
    print(f"Soma total                 : {soma}")
    print(f"Média                      : {soma/cont_total:.2f}")
else:
    print("Nenhum número foi digitado.")
