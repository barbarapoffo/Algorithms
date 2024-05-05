#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>
#define ex2

#ifdef ex2 //calculo salario //
int horaAula, salario, nivel, horas;

int nivel1 (int horas)
{
    return horas * 55.00;
}

int nivel2 (int horas)
{
    return horas * 67.00;
}

int nivel3 (int horas)
{
    return horas * 78.00;
}

void calculoHora ()
{
    do {
        printf("Vamos calcular seu salário. Digite seu nível de professor. \n");
        scanf("%d", &nivel);
        fflush(stdin); // usado para remover buffer dos comandos de entrada //
        system("cls");

        printf("Agora digite a quantidade de horas que você leciona por dia. \n");
        scanf("%d", &horas);
        fflush(stdin);
        system("cls");

        switch(nivel)
        {
            case 1:
                    horaAula = nivel1(horas);
                    break;
            case 2:
                    horaAula = nivel2(horas);
                    break;
            case 3:
                    horaAula = nivel3(horas);
                    break;
            default:
                    printf("Nível não cadastrado.\n");
                    break;
            }

    } while (nivel != 1 && nivel != 2 && nivel != 3);

    system("cls");
}

int calculoSalario ()
{
  int dias;

  do {
    printf("Agora digite a quantidade de dias que você leciona no mês. \n");
    scanf("%d", &dias);
    fflush(stdin);
    system("cls");
    salario = horaAula * dias;
  } while (dias == 0);

  return salario;
}

int main ()
{
  setlocale(LC_ALL, "Portuguese");

  int opt;

  while (opt != 2) {
    if (opt == 1) {

      calculoHora(horas);

      int salarioFinal = calculoSalario();

      printf("Voce recebe %d por aula. \n", horaAula);

      printf("Seu salário mensal é de: %d . \n", salarioFinal);

      system("pause");
      system("cls");
    }

    printf("Digite uma opção para continuar. \n");
    printf("1- Iniciar o programa. \n");
    printf("2- Sair. \n");
    scanf("%d", &opt);
    fflush(stdin);
    system("pause");
    system("cls");

    }
    return 0;
}
#endif //ex2 

#ifdef ex3 //maior numero//
int main ()
{
    int n1, n2, n3;

    do {
        printf("Vamos digitar tres numeros e mostrar o maior. \n");
        printf("Digite o primeiro numero. \n");
        scanf("%d", &n1);
        fflush(stdin);

        system("cls");

        printf("Agora digite o segundo numero. \n");
        scanf("%d", &n2);
        fflush(stdin);

        system ("cls");

        printf("Digite o ultimo numero. \n");
        scanf("%d", &n3);
        fflush(stdin);

        system ("cls");

        if (n1 == n2 && n2 == n3 && n1 == n3) {
            printf("Os numeros nao podem ser iguais, digite novamnete. \n");
        }
    } while (n1 == n2 && n2 == n3 && n1 == n3);

    if (n1 > n2 && n1 > n3) {
        printf("O primeiro numero digitado eh o maior de todos: %d. \n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("O segundo numero eh o maior de todos: %d. \n", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("O terceiro numero digitado eh o maior: %d.\n", n3);
    }

    return 0;
}
#endif //ex 3

#ifdef ex4 //triangulo //
int main()
{
    int l1, l2, l3;

    do {
        printf("digite o tamanho do primeiro lado do triangulo. \n");
        scanf("%d", &l1);
        fflush(stdin);

        system("cls");

        printf("Digite o segundo lado \n");
        scanf("%d", &l2);
        fflush(stdin);

        system("cls");

        printf("digite o ultimo lado \n");
        scanf("%d", &l3);
        fflush(stdin);

        system("cls");

        if (((l1 + l2) > l3) || ((l1 + l3) > l2) || ((l2 + l3) > l1)) {
            printf("as somas de dois lados gera um numero maior que o outro lado, portanto nao eh um triangulo, digite novamente \n");
        }
    } while ((l1 + l2) > l3 || (l1 + l3) > l2 || (l2 + l3) > l1);

    if (l1 == l2 && l1 == l3 && l2 == l3) {
        printf("o triangulo eh um triangulo equilatero.");
    } else if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("o triangulo eh isoceles");
    } else {
        printf("o triangulo eh escaleno");
    }
    return 0;
}
#endif //ex4

#ifdef ex5 //hexa e decimal// 
int main () 
{
    int opcao, valor;

    printf("escolha uma opcao \n");
    printf("1- numero decimal para hexadecimal \n");
    printf("2- numero hexadecimal para decimal \n");
    scanf("%d", &opcao);
    fflush(stdin);

    system ("cls");

    switch (opcao)
    {
    case 1:
        printf("digite o numero decimal \n");
        scanf("%d", &valor);
        fflush(stdin);
        printf("o numero %d em hexadecimal equivale a %x", valor, valor);
        break;
    case 2:
        printf("digite o numero hexadecimal");
        scanf("%x", &valor);
        fflush(stdin);
        printf("o numero %x em decimal eh %d", valor, valor);
        break;        
    default:
        printf("a opcao escolhida nao eh valida");
        break;
    }
     return 0;
}
#endif //ex5

#ifdef ex9 // abono //
int main () 
{
    int idade, sexo;
    float salario, abono;

    do {
        printf("Vamos calcular seu novo salario com abono. \n");
        printf("Digite seu salario atual. \n");
        scanf("%f", &salario);
        fflush(stdin);
        system("cls");

        if (salario <= 0) {
            printf("Valor inválido para salario. Digite novamente");
            system("pause");
            system("cls");
        }
    } while (salario <= 0);

    do {
        printf("Agora seu sexo. Digite 1 para MASCULINO e 2 para FEMININO. \n");
        scanf("%d", &sexo);
        fflush(stdin);
        system ("cls");

        if (sexo != 1 && sexo != 2) {
            printf("Valor invalido para SEXO. Digite novamente.\n");
            system("pause");
            system("cls");
        }
    } while (sexo != 1 && sexo != 2);

    do {
        printf("Insira a sua idade. \n");
        scanf("%d", &idade);
        fflush(stdin);
        system("cls");

        if (idade <= 0) {
            printf("Valor invalido para IDADE.\n");
            system("pause");
            system("cls");
        }
    } while (idade <= 0);

    if (sexo == 1) {
        if (idade >= 30) {
            abono = salario + 200;
        } else {
            abono = salario + 120;
        }
    } else {
        if (idade >= 30) {
            abono = salario + 220;
        } else {
            abono = salario + 130;
        }
    }

    printf("De acordo com seu sexo: %d (1- masculino\n 2- feminino)\n e sua idade: %d \n seu salario atual eh de %2.f e o novo com o abono sera de %2.f. \n", sexo, idade, salario, abono);

    return 0;


}
#endif //ex9