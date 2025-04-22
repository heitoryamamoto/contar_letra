#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, count = 0;

R1:
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    goto R2;

R2:
    if (str[i] == '\0') goto R4;
    goto R3;

R3:
    count++;
    i++;
    goto R2;

R4:
    printf("\nResultado final: A string tem %d caracteres.\n", count);
    goto R5;

R5:
    return 0;
}
