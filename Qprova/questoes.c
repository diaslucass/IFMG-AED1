#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, celsius, fahrenheit, numero, chute;
    char operador;
    int questao;
    printf("Digite o número da questão (1-10): ");
    float media, soma, produto, divisao;
    switch (questao)
    {
    case 1:
        printf("Digite um número para calcular o fatorial: ");
        scanf("%d", &n);
        int resultado_fatorial = fatorial(n);
        if (resultado_fatorial == -1)
        {
            printf("Fatorial não definido para números negativos.\n");
        }
        else
        {
            printf("Fatorial de %d é %d\n", n, resultado_fatorial);
        }
        break;
    case 2:
        printf("Digite dois números e um operador (+, -, *, /): ");
        scanf("%d %d %c", &a, &b, &operador);
        float resultado_calculadora = calculadora(a, b, operador);
        if (resultado_calculadora == 0 && operador == '/')
        {
            printf("Erro: Divisão por zero.\n");
        }
        else
        {
            printf("Resultado: %.2f\n", resultado_calculadora);
        }
        break;
    case 3:
        printf("Digite um número para calcular a tabuada: ");
        scanf("%d", &n);
        printf("Tabuada de %d:\n", n);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        break;
    case 4:
        printf("Digite a temperatura em Celsius: ");
        scanf("%d", &celsius);
        fahrenheit = celsius_fahrenheit(celsius);
        printf("%d Celsius é igual a %d Fahrenheit\n", celsius, fahrenheit);
        break;
    case 5:
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%d", &fahrenheit);
        celsius = fahrenheit_celsius(fahrenheit);
        printf("%d Fahrenheit é igual a %d Celsius\n", fahrenheit, celsius);
        break;
    case 6:
        printf("Digite um número para verificar se é primo: ");
        scanf("%d", &n);
        if (primo(n))
        {
            printf("%d é um número primo.\n", n);
        }
        else
        {
            printf("%d não é um número primo.\n", n);
        }
        break;
    case 7:
        printf("Digite um número para verificar se é par ou ímpar: ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("%d é um número par.\n", n);
        }
        else
        {
            printf("%d é um número ímpar.\n", n);
        }
        break;
    case 8:
        printf("Digite um número para verificar se é positivo ou negativo: ");
        scanf("%d", &n);
        if (n > 0)
        {
            printf("%d é um número positivo.\n", n);
        }
        else if (n < 0)
        {
            printf("%d é um número negativo.\n", n);
        }
        else
        {
            printf("O número é zero.\n");
        }
        break;
    case 9:
        printf("Digite um número para calcular o n-ésimo número de Fibonacci: ");
        scanf("%d", &n);
        int resultado_fibonacci = fibonacci(n);
        printf("O %d-ésimo número de Fibonacci é %d.\n", n, resultado_fibonacci);
        break;
    case 10:
        printf("Digite um número entre 1 e 100 para adivinhar: ");
        scanf("%d", &n);
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        if (chute == n)
        {
            printf("Parabéns! Você acertou!\n");
        }
        else
        {
            int resultado_guess = numberguess(n, chute);
            if (resultado_guess == -1)
            {
                printf("Chute inválido.\n");
            }
            else if (resultado_guess == 0)
            {
                printf("Chute muito baixo.\n");
            }
            else if (resultado_guess == 1)
            {
                printf("Chute muito alto.\n");
            }
        }
        break;
    default:
        printf("Questão inválida. Por favor, escolha um número entre 1 e 10.\n");
        break;
    }
    return 0;
}

int fatorial(int n)
{
    if (n < 0)
        return -1; // Fatorial não definido para números negativos
    if (n == 0 || n == 1)
        return 1; // Fatorial de 0 e 1 é 1
    int resultado = 1;
    for (int i = 2; i <= n; i++)
    {
        resultado *= i; // Multiplica os números de 2 até n
    }
    return resultado;
}

float calculadora(int a, int b, char operador)
{
    switch (operador)
    {
    case '+':
        return a + b; // Soma
    case '-':
        return a - b; // Subtração
    case '*':
        return a * b; // Multiplicação
    case '/':
        if (b == 0)
        {
            printf("Erro: Divisão por zero.\n");
            return 0; // Retorna 0 em caso de divisão por zero
        }
        return (float)a / b; // Divisão
    default:
        printf("Operador inválido.\n");
        return 0; // Retorna 0 para operador inválido
    }
}

int celsius_fahrenheit(int celsius)
{
    return (celsius * 9 / 5) + 32;
    // Fórmula para converter Celsius para Fahrenheit
}

int fahrenheit_celsius(int fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
    // Fórmula para converter Fahrenheit para Celsius
}

int primo(int n)
{
    if (n < 2)
        return 0;
    // Números menores que 2 não são primos
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
        // Se n é divisível por i, não é primo
    }
    return 1; // Se não encontrou divisores, é primo
}

int fibonacci(int n)
{
    if (n < 0)
        return -1; // Fibonacci não definido para números negativos
    if (n == 0)
        return 0; // Fibonacci de 0 é 0
    if (n == 1)
        return 1; // Fibonacci de 1 é 1
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b; // Próximo número é a soma dos dois anteriores
        a = b;     // Atualiza a para o próximo número
        b = c;     // Atualiza b para o próximo número
    }
    return b; // Retorna o n-ésimo número de Fibonacci
}

int numberguess(int numero, int chute)
{
    if (chute < 1 || chute > 100)
    {
        printf("Chute deve estar entre 1 e 100.\n");
        return -1; // Retorna -1 para chute inválido
    }
    if (chute < numero)
    {
        printf("Chute muito baixo.\n");
        return 0; // Retorna 0 se o chute for muito baixo
    }
    else if (chute > numero)
    {
        printf("Chute muito alto.\n");
        return 1; // Retorna 1 se o chute for muito alto
    }
    else
    {
        printf("Parabéns! Você acertou!\n");
        return 2; // Retorna 2 se o chute estiver correto
    }
}