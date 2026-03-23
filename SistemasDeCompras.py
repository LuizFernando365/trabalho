total = 0
qtd_itens = 0
soma_precos = 0

print("Registro de compra (digite 0 no preço para finalizar)\n")

while True:
    try:
        preco = float(input("Preço do produto (0 para finalizar): R$ "))
        if preco == 0:
            break
        if preco < 0:
            print("Preço não pode ser negativo.")
            continue
            
        qtd = int(input("Quantidade: "))
        if qtd <= 0:
            print("Quantidade inválida.")
            continue
            
        subtotal = preco * qtd
        total += subtotal
        qtd_itens += qtd
        soma_precos += preco  # para calcular preço médio por produto diferente
        
        print(f"  → Adicionado: {qtd} × R$ {preco:.2f} = R$ {subtotal:.2f}\n")
        
    except:
        print("Valor inválido. Tente novamente.\n")

if qtd_itens > 0:
    preco_medio = total / qtd_itens
    print("\nResumo da compra:")
    print(f"Valor total da compra     : R$ {total:,.2f}")
    print(f"Quantidade total de itens : {qtd_itens}")
    print(f"Preço médio por item      : R$ {preco_medio:.2f}")
else:
    print("\nNenhum produto foi registrado.")
