def contar_caracteres_recursivo(string, i=0, count=0):
    if i < len(string):
        return contar_caracteres_recursivo(string, i+1, count+1)
    return count

string = input("Digite uma string: ")
resultado = contar_caracteres_recursivo(string)
print(f"\nResultado final: A string tem {resultado} caracteres.")
