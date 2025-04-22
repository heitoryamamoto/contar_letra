def contar_caracteres_iterativo(string):
    count = 0
    i = 0
    while i < len(string):
        count += 1
        i += 1
    return count

string = input("Digite uma string: ")
resultado = contar_caracteres_iterativo(string)
print(f"\nResultado final: A string tem {resultado} caracteres.")
