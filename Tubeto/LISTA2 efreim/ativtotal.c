#include <stdio.h>
#include <stdlib.h>

// Parte 1
// Exercício 1: Imprima na tela os números de 1 a 10 usando uma estrutura de repetição.
void exercicio1_1() {
    printf("\n--- Exercício 1.1 ---\n");
    printf("Números de 1 a 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}


// Exercício 2: Imprima na tela os números pares de 0 a 20.
void exercicio1_2() {
    printf("\n--- Exercício 1.2 ---\n");
    printf("Números pares de 0 a 20:\n");
    for (int i = 0; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// Exercício 3: Solicite um número do usuário e imprima a tabuada desse número de 1 a 10.
void exercicio1_3() {
    printf("\n--- Exercício 1.3 ---\n");
    int num;
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &num);

    printf("Tabuada do %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Exercício 4: Leia 5 números do usuário e imprima a soma deles.
void exercicio1_4() {
    printf("\n--- Exercício 1.4 ---\n");
    int num, soma = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos números é: %d\n", soma);
}

// Exercício 5: Leia 10 números e informe o maior número digitado.
void exercicio1_5() {
    printf("\n--- Exercício 1.5 ---\n");
    int num, maior;

    printf("Digite o 1º número: ");
    scanf("%d", &maior);

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior número digitado foi: %d\n", maior);
}

// Exercício 6: Solicite ao usuário que informe 10 números e calcule a média entre eles.
void exercicio1_6() {
    printf("\n--- Exercício 1.6 ---\n");
    int num, soma = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        soma += num;
    }

    float media = (float)soma / 10;
    printf("A média dos números é: %.2f\n", media);
}

// Exercício 7: Solicite um número inteiro e conte quantos divisores esse número tem.
void exercicio1_7() {
    printf("\n--- Exercício 1.7 ---\n");
    int num, divisores = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }

    printf("O número %d tem %d divisores.\n", num, divisores);
}

// Exercício 8: Solicite ao usuário um número positivo e calcule o fatorial dele.
void exercicio1_8() {
    printf("\n--- Exercício 1.8 ---\n");
    int num;
    long long fatorial = 1;

    printf("Digite um número positivo para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %lld\n", num, fatorial);
    }
}

// Exercício 9: Solicite ao usuário que informe números até que ele digite o número 0. No final, mostre a soma de todos os números digitados.
void exercicio1_9() {
    printf("\n--- Exercício 1.9 ---\n");
    int num, soma = 0;

    do {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);
        soma += num;
    } while (num != 0);

    printf("A soma de todos os números digitados é: %d\n", soma);
}

// Exercício 10: Imprima na tela todos os múltiplos de 4 entre 0 e 100.
void exercicio1_10() {
    printf("\n--- Exercício 1.10 ---\n");
    printf("Múltiplos de 4 entre 0 e 100:\n");

    for (int i = 0; i <= 100; i += 4) {
        printf("%d ", i);
    }
    printf("\n");
}

// Exercício 11: Leia números até que a soma dos números lidos seja maior que 100.
void exercicio1_11() {
    printf("\n--- Exercício 1.11 ---\n");
    int num, soma = 0;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
        printf("Soma atual: %d\n", soma);
    } while (soma <= 100);

    printf("A soma ultrapassou 100! Resultado final: %d\n", soma);
}

// Exercício 12: Solicite um número e imprima os números de 1 até esse número.
void exercicio1_12() {
    printf("\n--- Exercício 1.12 ---\n");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Números de 1 até %d:\n", num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Exercício 13: Faça um programa que solicite 10 idades e exiba quantas pessoas são maiores de idade.
void exercicio1_13() {
    printf("\n--- Exercício 1.13 ---\n");
    int idade, maiores = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da %dª pessoa: ", i);
        scanf("%d", &idade);

        if (idade >= 18) {
            maiores++;
        }
    }

    printf("Quantidade de pessoas maiores de idade: %d\n", maiores);
}

// Exercício 14: Solicite um número e imprima todos os seus divisores.
void exercicio1_14() {
    printf("\n--- Exercício 1.14 ---\n");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Divisores de %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Exercício 15: Solicite ao usuário dois números e exiba todos os números entre eles (inclusive) em ordem crescente.
void exercicio1_15() {
    printf("\n--- Exercício 1.15 ---\n");
    int num1, num2, inicio, fim;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 <= num2) {
        inicio = num1;
        fim = num2;
    } else {
        inicio = num2;
        fim = num1;
    }

    printf("Números entre %d e %d (inclusive):\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Exercício 16: Solicite 5 notas de alunos e informe quantos alunos ficaram acima da média 7.
void exercicio1_16() {
    printf("\n--- Exercício 1.16 ---\n");
    float nota;
    int acima_media = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &nota);

        if (nota > 7.0) {
            acima_media++;
        }
    }

    printf("Quantidade de alunos acima da média 7: %d\n", acima_media);
}

// Exercício 17: Imprima a sequência de números de 100 até 0, de 2 em 2.
void exercicio1_17() {
    printf("\n--- Exercício 1.17 ---\n");
    printf("Sequência de 100 até 0, de 2 em 2:\n");

    for (int i = 100; i >= 0; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// Exercício 18: Leia 10 números e informe quantos são positivos, quantos são negativos e quantos são iguais a zero.
void exercicio1_18() {
    printf("\n--- Exercício 1.18 ---\n");
    int num, positivos = 0, negativos = 0, zeros = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    printf("Quantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Quantidade de zeros: %d\n", zeros);
}

// Exercício 19: Calcule e imprima os 10 primeiros termos da sequência de Fibonacci.
void exercicio1_19() {
    printf("\n--- Exercício 1.19 ---\n");
    int fib[10];
    fib[0] = 0;
    fib[1] = 1;

    printf("10 primeiros termos da sequência de Fibonacci:\n");
    printf("%d %d ", fib[0], fib[1]);

    for (int i = 2; i < 10; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d ", fib[i]);
    }
    printf("\n");
}

// Exercício 20: Leia vários números até o usuário digitar um número negativo. Depois mostre o menor número lido.
void exercicio1_20() {
    printf("\n--- Exercício 1.20 ---\n");
    int num, menor;

    printf("Digite um número (negativo para sair): ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Nenhum número válido foi digitado.\n");
        return;
    }

    menor = num;

    while (1) {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        if (num < menor) {
            menor = num;
        }
    }

    printf("O menor número lido foi: %d\n", menor);
}

// Parte 2
// Exercício 1: Faça um programa que mostre a tabuada do número 5.
void exercicio2_1() {
    printf("\n--- Exercício 2.1 ---\n");
    printf("Tabuada do número 5:\n");

    for (int i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }
}

// Exercício 2: Faça um programa que mostre a tabuada de qualquer número escolhido pelo usuário.
void exercicio2_2() {
    printf("\n--- Exercício 2.2 ---\n");
    int num;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &num);

    printf("Tabuada do %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Exercício 3: Faça um algoritmo que leia vários números e informe quantos desses números entre 100 e 200 foram digitados.
void exercicio2_3() {
    printf("\n--- Exercício 2.3 ---\n");
    int num, contador = 0;

    while (1) {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num >= 100 && num <= 200) {
            contador++;
        }
    }

    printf("Quantidade de números entre 100 e 200: %d\n", contador);
}

// Exercício 4: Faça um programa que leia 10 valores inteiros e encontre o maior, o menor e a média.
void exercicio2_4() {
    printf("\n--- Exercício 2.4 ---\n");
    int num, maior, menor, soma = 0;

    printf("Digite o 1º número: ");
    scanf("%d", &num);

    maior = menor = num;
    soma = num;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        soma += num;

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    float media = (float)soma / 10;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", media);
}

// Exercício 5: Faça um programa que exiba na tela os números ímpares entre 100 e 300.
void exercicio2_5() {
    printf("\n--- Exercício 2.5 ---\n");
    printf("Números ímpares entre 100 e 300:\n");

    for (int i = 101; i <= 300; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// Exercício 6: Chico tem 1,70m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano.
void exercicio2_6() {
    printf("\n--- Exercício 2.6 ---\n");
    float alturaChico = 1.70;
    float alturaJuca = 1.10;
    int anos = 0;

    while (alturaJuca <= alturaChico) {
        alturaChico += 0.02;
        alturaJuca += 0.03;
        anos++;
    }

    printf("Serão necessários %d anos para Juca ser maior que Chico.\n", anos);
    printf("Altura final de Chico: %.2f metros\n", alturaChico);
    printf("Altura final de Juca: %.2f metros\n", alturaJuca);
}

// Exercício 7: Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B...
void exercicio2_7() {
    printf("\n--- Exercício 2.7 ---\n");
    double populacaoA = 5000000;
    double populacaoB = 7000000;
    int anos = 0;

    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * 0.03;
        populacaoB += populacaoB * 0.02;
        anos++;
    }

    printf("Serão necessários %d anos para a população do país A ultrapassar a do país B.\n", anos);
    printf("População final do país A: %.0f habitantes\n", populacaoA);
    printf("População final do país B: %.0f habitantes\n", populacaoB);
}

// Exercício 8: Faça um programa que receba um número inteiro e positivo, e diga se esse número é primo ou não.
void exercicio2_8() {
    printf("\n--- Exercício 2.8 ---\n");
    int num, divisores = 0;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("O número %d não é primo.\n", num);
        return;
    }

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O número %d é primo.\n", num);
    } else {
        printf("O número %d não é primo.\n", num);
    }
}

// Exercício 9: Faça um programa que receba a idade de 10 pessoas e mostre quantas são maiores que 18 anos.
void exercicio2_9() {
    printf("\n--- Exercício 2.9 ---\n");
    int idade, maiores = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da %dª pessoa: ", i);
        scanf("%d", &idade);

        if (idade > 18) {
            maiores++;
        }
    }

    printf("Quantidade de pessoas com mais de 18 anos: %d\n", maiores);
}

// Exercício 10: Uma loja utiliza o código V para compras à vista e o código P para compras a prazo.
void exercicio2_10() {
    printf("\n--- Exercício 2.10 ---\n");
    char codigo;
    float valor, totalVista = 0, totalPrazo = 0;

    for (int i = 1; i <= 15; i++) {
        printf("Transação %d - Digite o código (V-vista, P-prazo): ", i);
        scanf(" %c", &codigo);

        printf("Digite o valor da transação: R$ ");
        scanf("%f", &valor);

        if (codigo == 'V' || codigo == 'v') {
            totalVista += valor;
        } else if (codigo == 'P' || codigo == 'p') {
            totalPrazo += valor;
        } else {
            printf("Código inválido! Use V ou P.\n");
            i--;
        }
    }

    float totalGeral = totalVista + totalPrazo;

    printf("\nValor total das compras à vista: R$ %.2f\n", totalVista);
    printf("Valor total das compras a prazo: R$ %.2f\n", totalPrazo);
    printf("Valor total das compras efetuadas: R$ %.2f\n", totalGeral);
}

// Exercício 11: A prefeitura de uma cidade fez uma pesquisa com 200 pessoas, coletando dados sobre o salário e o número de filhos.
void exercicio2_11() {
    printf("\n--- Exercício 2.11 ---\n");
    float salario, totalSalario = 0, maiorSalario = 0;
    int filhos, totalFilhos = 0, pessoasSalarioBaixo = 0;

    // Para fins de teste, reduzimos para 5 pessoas em vez de 200
    for (int i = 1; i <= 5; i++) {
        printf("Pessoa %d - Digite o salário: R$ ", i);
        scanf("%f", &salario);

        printf("Pessoa %d - Digite o número de filhos: ", i);
        scanf("%d", &filhos);

        totalSalario += salario;
        totalFilhos += filhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 150.0) {
            pessoasSalarioBaixo++;
        }
    }

    float mediaSalario = totalSalario / 5;
    float mediaFilhos = (float)totalFilhos / 5;
    float percentagemSalarioBaixo = (float)pessoasSalarioBaixo * 100 / 5;

    printf("\nMédia de salário: R$ %.2f\n", mediaSalario);
    printf("Média de filhos: %.2f\n", mediaFilhos);
    printf("Maior salário: R$ %.2f\n", maiorSalario);
    printf("Percentagem de pessoas com salário até R$ 150,00: %.2f%%\n", percentagemSalarioBaixo);
}

// Exercício 12: Crie um algoritmo que ajude o DETRAN a saber o total de recursos arrecadados com multas.
void exercicio2_12() {
    printf("\n--- Exercício 2.12 ---\n");
    int carteira, numMultas, maiorMultasCarteira = 0, maiorNumMultas = 0;
    float valorMulta, totalDivida, totalArrecadado = 0;

    // Para fins de teste, reduzimos para 3 motoristas
    for (int i = 1; i <= 3; i++) {
        printf("Motorista %d - Digite o número da carteira (1-4327): ", i);
        scanf("%d", &carteira);

        printf("Motorista %d - Digite o número de multas: ", i);
        scanf("%d", &numMultas);

        totalDivida = 0;

        for (int j = 1; j <= numMultas; j++) {
            printf("Digite o valor da multa %d: R$ ", j);
            scanf("%f", &valorMulta);

            totalDivida += valorMulta;
        }

        totalArrecadado += totalDivida;

        printf("Dívida do motorista %d: R$ %.2f\n\n", carteira, totalDivida);

        if (numMultas > maiorNumMultas) {
            maiorNumMultas = numMultas;
            maiorMultasCarteira = carteira;
        }
    }

    printf("Total de recursos arrecadados: R$ %.2f\n", totalArrecadado);
    printf("Motorista com maior número de multas: Carteira nº %d (%d multas)\n", maiorMultasCarteira, maiorNumMultas);
}

int main() {
    int opcao = 1;

    while (opcao != 0) {
        printf("\n=== MENU DE EXERCÍCIOS ===\n");
        printf("Parte 1:\n");
        printf("1. Imprimir números de 1 a 10\n");
        printf("2. Imprimir números pares de 0 a 20\n");
        printf("3. Tabuada de um número\n");
        printf("4. Ler 5 números e somar\n");
        printf("5. Ler 10 números e informar o maior\n");
        printf("6. Ler 10 números e calcular média\n");
        printf("7. Contar divisores de um número\n");
        printf("8. Calcular fatorial\n");
        printf("9. Somar números até digitar 0\n");
        printf("10. Múltiplos de 4 entre 0 e 100\n");
        printf("11. Ler números até soma > 100\n");
        printf("12. Imprimir números de 1 até N\n");
        printf("13. Contar maiores de idade\n");
        printf("14. Imprimir divisores de um número\n");
        printf("15. Números entre dois valores\n");
        printf("16. Contar alunos acima da média\n");
        printf("17. Sequência de 100 a 0 de 2 em 2\n");
        printf("18. Contar positivos, negativos e zeros\n");
        printf("19. Fibonacci\n");
        printf("20. Menor número até digitar negativo\n");
        printf("\nParte 2:\n");
        printf("21. Tabuada do 5\n");
        printf("22. Tabuada de qualquer número\n");
        printf("23. Números entre 100 e 200\n");
        printf("24. Maior, menor e média de 10 números\n");
        printf("25. Ímpares entre 100 e 300\n");
        printf("26. Crescimento de Chico e Juca\n");
        printf("27. Crescimento populacional\n");
        printf("28. Verificar se número é primo\n");
        printf("29. Contar pessoas maiores de 18 anos\n");
        printf("30. Compras à vista e a prazo\n");
        printf("31. Pesquisa da prefeitura\n");
        printf("32. Sistema de multas DETRAN\n");
        printf("\n0. Sair\n");

        printf("\nEscolha um exercício (0-32): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo do programa...\n");
                break;
            case 1:
                exercicio1_1();
                break;
            case 2:
                exercicio1_2();
                break;
            case 3:
                exercicio1_3();
                break;
            case 4:
                exercicio1_4();
                break;
            case 5:
                exercicio1_5();
                break;
            case 6:
                exercicio1_6();
                break;
            case 7:
                exercicio1_7();
                break;
            case 8:
                exercicio1_8();
                break;
            case 9:
                exercicio1_9();
                break;
            case 10:
                exercicio1_10();
                break;
            case 11:
                exercicio1_11();
                break;
            case 12:
                exercicio1_12();
                break;
            case 13:
                exercicio1_13();
                break;
            case 14:
                exercicio1_14();
                break;
            case 15:
                exercicio1_15();
                break;
            case 16:
                exercicio1_16();
                break;
            case 17:
                exercicio1_17();
                break;
            case 18:
                exercicio1_18();
                break;
            case 19:
                exercicio1_19();
                break;
            case 20:
                exercicio1_20();
                break;
            case 21:
                exercicio2_1();
                break;
            case 22:
                exercicio2_2();
                break;
            case 23:
                exercicio2_3();
                break;
            case 24:
                exercicio2_4();
                break;
            case 25:
                exercicio2_5();
                break;
            case 26:
                exercicio2_6();
                break;
            case 27:
                exercicio2_7();
                break;
            case 28:
                exercicio2_8();
                break;
            case 29:
                exercicio2_9();
                break;
            case 30:
                exercicio2_10();
                break;
            case 31:
                exercicio2_11();
                break;
            case 32:
                exercicio2_12();
                break;
            default:
                printf("Opção inválida!\n");
        }

        printf("\nPressione Enter para continuar...");
        getchar(); // Consumir o \n
        getchar(); // Aguardar Enter
    }

    return 0;
}
