#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#define ex1

#ifdef ex9
int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero;

    do {
        printf("Digite um n�mero maior ou igual a zero. \n");
        scanf("%d", &numero);
        fflush(stdin);
        system ("cls");

        if (numero < 0) {
            printf("O n�mero n�o pode ser negativo. Digite novamente. \n");
            system ("pause");
            system ("cls");
        }
    } while (numero < 0);

    system ("cls");

    int resultado = fatorial(numero);
    printf("O fatorial de %d � %d. \n", numero, resultado);

    return 0;
}

int fatorial(int numero) {

    int fat = 1;

    for ( ; numero > 1; numero--) {
        fat = fat * numero;
    }
    return fat;
}
#endif // ex9


