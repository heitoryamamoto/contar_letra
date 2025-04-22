#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

inicio:
    if (str[i] == '\0') goto fim;

    count++;
    i++;
    goto inicio;

fim:
    printf("\nResultado final: A string tem %d caracteres.\n", count);
    return 0;
}
