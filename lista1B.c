#define ex15
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex1
main ()
{
    int n1;
    int n2;

    printf("\t Digite um numero: \n\n\t\t");
    scanf("%d", &n1); //se nao usar o pointer, ele vai atribuir o valor padrao de %d q � 3000 e pouco//
    printf("\n \n \t O numero digitado foi %d. \n\n", n1);

    int antecessorN1 = n1 - 1;
    int sucessorN1 = n1 + 1;

    printf("\n \n \t O antecessor de %d eh %d, e o sucessor eh %d. \n \n", n1, antecessorN1, sucessorN1);

    printf("\t Digite outro numero: \n\n\t\t");
    scanf("%d", &n2);
    printf("\n\n\t O segundo numero digitado foi %d. \n\n", n2);

    int antecessorN2 = n2 - 1;
    int sucessorN2 = n2 + 1;

    printf("\n \n \t O antecessor de %d eh %d, e o sucessor eh %d. \n \n \t", n2, antecessorN2, sucessorN2);
}
#endif // ex1 antecessor e sucessor


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex2
main ()
{
    int a;

    printf("\t Digite um numero inteiro: \t\n\n\t");
    scanf("%d", &a);
    printf("\n \t O numero escolhido eh %d. \n\n\t", a);

    if (a == 0) {
        printf("\n O numero digitado nao pode ser 0, digite novamente. \n\n");
    } else if (a > 0) {
            printf("\n \t O numero digitado eh positivo. \n\n");
        } else {
            printf("\n \t O numero digitado eh negativo. \n\n");
        }
}
#endif // ex2 positivo ou negativo


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex3
main ()
{
    float n1;
    float n2;
    float n3;
    float n4;

    printf("\t Digite a primeira nota: \n \n \t");
    scanf("%f", &n1);
    printf("\t \n \n \t Digite a segunda nota: \n \n \t");
    scanf("%f", &n2);
    printf("\t \n \n \t Digite a terceira nota: \n \n \t");
    scanf("%f", &n3);
    printf("\t \n \n \t Digite a ultima nota: \n \n \t");
    scanf("%f", &n4);

    float media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 6) {
        printf("\n \n \t Sua media foi %f, vc esta aprovado. \n \n", media);
    } else {
        printf("\n \n \t Sua media foi %f, vc esta reprovado. \n \n", media);
    }

}
#endif // ex3 media


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex4
main ()
{
    float n1;
    float n2;

    printf("\t Digite um numero diferente de zero: \n \n \t");
    scanf("%f", &n1);
    printf("\t Digite mais um numero diferente de zero: \n \n \t");
    scanf("%f", &n2);

    while (n1 == 0 || n2 == 0) {
        printf("\t \n \n O numero digitado deve ser diferente de zero, digite novamente.\n\n");
        return;
    }

    float calculo = fmod(n1, n2);

    if (calculo == 0) {
        printf("\t Os numeros sao multiplos. \n \n ");
    } else {
        printf("\t Os numeros nao sao multiplos. \n \n");
    }
}
#endif // ex4 multiplos


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex5
main ()
{
    int a;
    int b;
    char valorA;
    char valorB;

    printf("\t Vamos definir se os numeros sao pares ou impares. Digite o primeiro numero inteiro. \n \n \t");
    scanf("%d", &a);

    printf("\t Agora digite o segundo numero inteiro. \n \n \t");
    scanf("%d", &b);

    if (a % 2 == 0) {
        valorA = 'p';
    } else {
        valorA = 'i';
    }

    if (b % 2 == 0) {
        valorB = 'p';
    } else {
        valorB = 'i';
    }

    printf("\t O primeiro numero eh %c e o segundo eh %c, sendo 'p' para pares e 'i' para impares.", valorA, valorB);
}
#endif // ex5 par e impar


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex6
main ()
{
    float a;
    float b;

    printf("\t Vamos definir qual numero eh maior. Digite qualquer numero. \n \n \t");
    scanf("%f", &a);

    do {
    printf("\t Digite outro numero. \n \n \t");
    scanf("%f", &b);
        if (a == b) {
            printf("\t Os numeros nao podem ser iguais, digite novamente. \n");
        }
    } while (a == b);

    if (a > b) {
        printf("\t O numero %f eh maior que o numero %f. \n", a, b);
    } else {
        printf("\t O numero %f eh maior que o numero %f. \n", b, a);
    }

}
#endif // ex6 maior e menor


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex7
main ()
{
    int sexo;
    float h;
    float peso;

    do {
        printf(" \t Digite seu sexo, sendo '1' para masculino e '2' para feminino. \n \n \t");
        scanf("%d", &sexo);

        if (sexo != 1 && sexo != 2) { // esse "if" dentro do "do" serve para aparecer a mensagem caso a entrada seja inv�lida, nao esta ligado ao loop em si" //
            printf(" \t O campo sexo' precisa ser '1' ou '2', digite novamente. \n \n");
        }
    } while (sexo != 1 && sexo != 2);

    printf(" \t Digite sua altura utilizando apenas pontos. \n \n \t");
    scanf("%f", &h);

        if (sexo == 1) { //compara�ao//
            peso = (72.7 * h) - 58; // atribui��o //
            printf("\t Seu peso ideal eh %f . \n \n", peso);
        } else {
            peso = (62.1 * h) - 44.7; // atribui��o //
            printf("\t Seu peso ideal eh %f . \n \n", peso);
        }
}

// o do-while vai fazer "do" o que estiver na condi�ao enquanto "while" outra condi�ao //
#endif // ex7 peso ideal


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex8
main ()
{
    float preco;
    float desconto;
    float precoComDesconto;
    float reajuste;
    float precoComReajuste;

    printf("\t Digite o preco do produto. \n \n \t");
    scanf("%f", &preco);

    desconto = 0.09 * preco;

    precoComDesconto = preco - desconto;

    reajuste = 0.1 * preco;

    precoComReajuste = preco + reajuste;

    printf("\t O preco do produto com desconto eh %f e o preco com reajuste eh %f. \n\n", precoComDesconto, precoComReajuste);
}
#endif // ex8 preco com desconto e reajuste


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex9
main ()
{
    float horaAula;
    int numAula;
    float descontoInss;
    float valorInss;
    float valorAula;
    float salario;

    printf("\t Vamos calcular o seu salario no final do mes, primeiro digite quanto custa cada hora de aula. \n \n \t");
    scanf("%f", &horaAula);

    printf("\t Agora informe a quantidade de aulas que voce da no mes. \n \n \t");
    scanf("%d", &numAula);

    printf("\t Ja temos seus dados de aula, agora diga a porcentagem do desconto do INSS. \n \n \t");
    scanf("%f", &descontoInss);

    valorAula = horaAula * numAula;

    valorInss = (descontoInss / 100) * valorAula;

    salario = valorAula - valorInss;

    printf("\t Seu salario liquido mensal eh de %f. \n\n", salario);
}
#endif // ex9 salario professor


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex11
main ()
{
    float preco;
    float inflacao;
    float precoComInflacao;

    printf("\t Digite o preco de um produto. \n \n \t");
    scanf("%f", &preco);

    if (preco >= 100) {
        inflacao = 0.2 * preco;
        precoComInflacao = preco + inflacao;
    } else {
        inflacao = 0.1 * preco;
        precoComInflacao = preco + inflacao;
    }

    printf("\t O preco inflacionado ficou %f. \n \n", precoComInflacao);
}
#endif // ex11 infla�ao


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex12
float reajuste (float salarioAtual) {
// crio uma funcao antes da main para fazer os calculos dos reajustes e passo como parametro uma variavel salarioAtual//
    if (salarioAtual <= 0) {
        printf("\n Salario deve ser maior que 0. \n");

    } else if (salarioAtual < 800) {
        salarioAtual = salarioAtual * 1.15;

    } else if (salarioAtual <= 1000) {
        salarioAtual = salarioAtual * 1.10;

    } else {
        salarioAtual = salarioAtual * 1.05;
    }
//cada condicao retornara um valor, que sera armazenado na variavel, e no final a funcao me retorna o valor correspond.//
    return salarioAtual;
}

int main ()
{
    float salarioAtual, novoSalario;
    int opt;
//na funcao main eu declaro as variaveis dos salarios (n tem prob usar o mesmo nome pq eh var. local)//
    do {
//uso um loop para o menu, ele ira aparecer SEMPRE o menu e guardar a opcao escolhida pelo usuario//
        printf("1- Iniciar o programa. \n");
        printf("2- Sair do programa. \n");
        printf("Escolha uma opcao para continuar: \n");
        scanf("%d", &opt);
        fflush(stdin);

        system ("cls");
//se for 1 ele inicia o programa (coloquei tudo numa condicao para so iniciar se for 1 mesmo)//
        if (opt == 1) {

            do {
                printf("Digite o seu salario atual maior que 0: \n");
                scanf("%f", &salarioAtual);
                fflush(stdin);

                system ("cls");

            } while (salarioAtual <= 0); //sempre pede o salario, porem se for menor ou igual a 0 ele fica repetindo a perg.//

            novoSalario = reajuste(salarioAtual); //chamo a funcao que tem os calculos e defino essa funcao como o valor de "novoSalario"

            printf("\t Salario antigo: %.2f\n", salarioAtual);
            printf("\t Salario novo: %.2f\n", novoSalario);

            system("pause");
            //imprimo e deixo o system pause para que o usuario possa ler sem o prompt voltar direto pro menu//
        }
    } while (opt != 2); // condicao para sair do programa. 1 inicia e 2 sai. //

        return 0;
}
#endif // ex12 salario com reajuste


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex13
int main ()
{
    int opt, num1, num2, somaFinal;

    do {

        printf("1- Iniciar o programa. \n");
        printf("2- Sair do programa. \n");
        printf("Escolha uma opcao para continuar: \n");
        scanf("%d", &opt);
        fflush(stdin);

        system("cls");

        do {

          do {
                printf("Digite um numero maior que 10 e menor que 25. \n \n");
                scanf("%d", &num1);
                fflush(stdin);

                system("cls");

                printf("Digite mais um numero maior ou igual a 0. \n \n");
                scanf("%d", &num2);
                fflush(stdin);

                system("cls");

                if (!(num1 > 10 && num1 < 25) || num2 < 0) {
                    printf("Os numeros precisam seguir as condicoes. Digite novamente. \n \n");
                    continue;
                }
            } while (!(num1 > 10 && num1 < 25) || num2 < 0);

            int num3 = num1 + num2;

            int num4 = num1 * num2 * num3;

            int num1Quad = num1 * num1;

            int num2Quad = num2 * num2;

            int num3Quad = num3 * num3;

            int num4Quad = num4 * num4;

            somaFinal= num1Quad + num2Quad + num3Quad + num4Quad;

            if (somaFinal >= 50000) {
                printf("A soma final dos numeros deu %d. \n \n", somaFinal);
            } else {
                printf("A soma final dos numeros deu %d, por ser menor que 50000, precisamos de novos dados. \n \n \t", somaFinal);
            }

        } while (somaFinal < 50000);

    } while (opt != 2);

    return 0;
}
#endif // ex13 soma de numeros com la�o de repeti�ao


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex14
int main ()
{
    int codigo;
    int quantidade;
    float preco;

    do {
        printf("\t Vamos calcular quanto o cliente esta devendo. Digite o codigo do produto. \n \n \t");
        scanf("%d", &codigo);

        if (codigo != 1001 && codigo != 1324 && codigo != 7623 && codigo != 6548 && codigo != 987) {
            printf("\n \n \t O codigo deste produto nao esta cadastrado, verifique e inicie o programa novamente. \n \n \t");
        }

    } while (codigo != 1001 && codigo != 1324 && codigo != 7623 && codigo != 6548 && codigo != 987);

    printf("\n \n \t Agora digite a quantidade comprada. \n \n \t");
    scanf("%d", &quantidade);

    if (codigo == 1001) {
        preco = quantidade * 5.32;
        printf("\n \n \t O cliente esta devendo %.2f \n \n.", preco);

    } else if (codigo == 1324 || codigo == 7623) {
        preco = quantidade * 6.45;
        printf("\n \n \t O cliente esta devendo %.2f \n \n.", preco);

    } else if (codigo == 6548) {
        preco = quantidade * 2.37;
        printf("\n \n \t O cliente esta devendo %.2f \n \n.", preco);

    } else if (codigo == 987) {
        preco = quantidade * 5.32;
        printf("\n \n \t O cliente esta devendo %.2f \n \n.", preco);
    }
}
#endif // ex14 precos e codigos


//------------------------------------------------------------------------------------------------------------------------------//


#ifdef ex15
int  main ()
{
    int aluno, nota1, nota2, nota3, mediaAp, mediaEx;
    char conceito;

    printf("\t Digite o seu numero de identificacao.\n");
    scanf("%d", &aluno);

    printf("\t Bem vindo aluno %d", aluno);

    system("cls");

    printf("\t Digite sua primeira nota \n");
    scanf("%d", &nota1);

    printf("\t Sua primeira nota foi %d \n", nota1);

    system("cls");

    printf("\t Agora digite a segunda nota \n");
    scanf("%d", &nota2);

    printf("\t Sua segunda nota foi %d",nota2);

    system("cls");


    printf("\t Agora a terceira nota \n");
    scanf("%d", &nota3);

    printf("Sua terceira nota foi %d", nota3);

    system("cls");


    printf("\t Agora digite a media dos exercicios \n");
    scanf("%d", &mediaEx);

    printf("Sua media dos exercicios foi %d", mediaEx);

    system("cls");

    mediaAp = (nota1 + (nota2 * 2) + (nota3 * 3) + mediaEx) / 7;

    printf("Sua media de aproveitamento foi %d", mediaAp);

    system("cls");

    if (mediaAp == 9) {
        conceito = 'A';
        printf("Seu conceito foi %c, vc esta aprovado!", conceito);
    }
}
#endif // ex15 media aproveitamento
