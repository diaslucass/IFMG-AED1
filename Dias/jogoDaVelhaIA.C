#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para sortear quem começa
char sortear_jogador_inicial() {
    srand(time(NULL));
    return (rand() % 2 == 0) ? 'X' : 'O';
}

// Verifica se alguém pode vencer na próxima jogada
int verifica_jogada_vencedora(char mat[3][3], char simbolo, int *lin, int *col) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] == ' ') {
                mat[i][j] = simbolo;
                if (
                    (mat[0][0] == simbolo && mat[0][1] == simbolo && mat[0][2] == simbolo) ||
                    (mat[1][0] == simbolo && mat[1][1] == simbolo && mat[1][2] == simbolo) ||
                    (mat[2][0] == simbolo && mat[2][1] == simbolo && mat[2][2] == simbolo) ||
                    (mat[0][0] == simbolo && mat[1][0] == simbolo && mat[2][0] == simbolo) ||
                    (mat[0][1] == simbolo && mat[1][1] == simbolo && mat[2][1] == simbolo) ||
                    (mat[0][2] == simbolo && mat[1][2] == simbolo && mat[2][2] == simbolo) ||
                    (mat[0][0] == simbolo && mat[1][1] == simbolo && mat[2][2] == simbolo) ||
                    (mat[0][2] == simbolo && mat[1][1] == simbolo && mat[2][0] == simbolo)
                ) {
                    *lin = i;
                    *col = j;
                    mat[i][j] = ' ';
                    return 1;
                }
                mat[i][j] = ' ';
            }
        }
    }
    return 0;
}

// Jogada aleatória
void jogada_aleatoria(char mat[3][3], int *posx, int *posy) {
    int x, y;
    do {
        x = rand() % 3;
        y = rand() % 3;
    } while (mat[x][y] != ' ');
    *posx = x;
    *posy = y;
}

// Jogada com lógica básica
void jogada_computador(char mat[3][3], char comp, char jogador, int *posx, int *posy) {
    if (verifica_jogada_vencedora(mat, comp, posx, posy)) return;         // Ganhar
    if (verifica_jogada_vencedora(mat, jogador, posx, posy)) return;      // Bloquear
    jogada_aleatoria(mat, posx, posy);                                     // Aleatória
}

int main()
{
    char mat[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char jogador, ganhou = ' ';
    int posx, posy, contador = 0;

    jogador = sortear_jogador_inicial();
    printf("Jogador sorteado para começar: %c\n", jogador);

    while (ganhou != 'X' && ganhou != 'O')
    {
        printf("\n   0   1   2\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", i);
            for (int j = 0; j < 3; j++)
            {
                printf(" %c ", mat[i][j]);
                if (j < 2) printf("|");
            }
            printf("\n");
            if (i < 2) printf("  -----------\n");
        }

        if (jogador == 'X')
        {
            contador++;
            printf("\nJogador X, selecione uma linha e uma coluna (ex: 0 1):\n");
            scanf("%d %d", &posx, &posy);

            if (posx < 0 || posx > 2 || posy < 0 || posy > 2 || mat[posx][posy] != ' ') {
                printf("Jogada inválida. Tente novamente.\n");
                contador--;
                continue;
            }

            mat[posx][posy] = 'X';

            if (((mat[0][0] == 'X') && (mat[0][1] == 'X') && (mat[0][2] == 'X')) ||
                ((mat[1][0] == 'X') && (mat[1][1] == 'X') && (mat[1][2] == 'X')) ||
                ((mat[2][0] == 'X') && (mat[2][1] == 'X') && (mat[2][2] == 'X')) ||
                ((mat[0][0] == 'X') && (mat[1][0] == 'X') && (mat[2][0] == 'X')) ||
                ((mat[0][1] == 'X') && (mat[1][1] == 'X') && (mat[2][1] == 'X')) ||
                ((mat[0][2] == 'X') && (mat[1][2] == 'X') && (mat[2][2] == 'X')) ||
                ((mat[0][0] == 'X') && (mat[1][1] == 'X') && (mat[2][2] == 'X')) ||
                ((mat[2][0] == 'X') && (mat[1][1] == 'X') && (mat[0][2] == 'X')))
            {
                ganhou = 'X';
                break;
            }
            else
            {
                jogador = 'O';
            }
        }

        else if (jogador == 'O')
        {
            contador++;
            printf("\n Jogador O (computador) está jogando...\n");
            jogada_computador(mat, 'O', 'X', &posx, &posy);
            mat[posx][posy] = 'O';

            if (((mat[0][0] == 'O') && (mat[0][1] == 'O') && (mat[0][2] == 'O')) ||
                ((mat[1][0] == 'O') && (mat[1][1] == 'O') && (mat[1][2] == 'O')) ||
                ((mat[2][0] == 'O') && (mat[2][1] == 'O') && (mat[2][2] == 'O')) ||
                ((mat[0][0] == 'O') && (mat[1][0] == 'O') && (mat[2][0] == 'O')) ||
                ((mat[0][1] == 'O') && (mat[1][1] == 'O') && (mat[2][1] == 'O')) ||
                ((mat[0][2] == 'O') && (mat[1][2] == 'O') && (mat[2][2] == 'O')) ||
                ((mat[0][0] == 'O') && (mat[1][1] == 'O') && (mat[2][2] == 'O')) ||
                ((mat[2][0] == 'O') && (mat[1][1] == 'O') && (mat[0][2] == 'O')))
            {
                ganhou = 'O';
                break;
            }
            else
            {
                jogador = 'X';
            }
        }

        if (contador == 9)
        {
            break;
        }
    }

    printf("\nResultado final:\n");
    printf("   0   1   2\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", mat[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----------\n");
    }

    if (ganhou == 'X' || ganhou == 'O')
    {
        printf("\n Jogador %c venceu!\n", ganhou);
    }
    else
    {
        printf("\n Empate! Ninguém venceu.\n");
    }

    return 0;
}
