#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#define ex1

#ifdef ex1
int contPares (int pares)
{
    if (pares == 0) {
        printf("Nenhum n�mero par foi digitado.\n");
    } else {
        printf("Foram digitados %d n�meros pares.\n", pares);
    }

    return pares;
}

int posicao (int vetor [6])
{
    int pares = 0;
    int i;

    for (i = 0; i < 6; i++) {
        if (vetor[i] % 2 == 0) {
            printf("Posi��o: %d. \n N�mero: %d. \n",i, vetor[i]);
            pares++;
        }
    }

    return pares;
}

int main ()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor [6];
    int i;
    int pares;

    printf("Digite 6 n�meros.\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    system ("cls");

    pares = posicao(vetor);

    system("pause");
    system("cls");

    contPares(pares);

    return 0;
}
#endif // ex2
