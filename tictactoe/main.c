#include <stdio.h>

int main()
{
    char mat[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char jogador, ganhou = ' ';
    int posx, posy, contador = 0;

    printf("Qual o jogador que começa? (X ou O)\n");
    scanf(" %c", &jogador);

    while (1)
    {

        printf("\n   1   2   3\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", i+1);
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

            posx--;
            posy--;

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
            printf("\n Jogador O, selecione uma linha e uma coluna (ex: 0 2):\n");
            scanf("%d %d", &posx, &posy);

            posx--;
            posy--;

            if (posx < 0 || posx > 2 || posy < 0 || posy > 2 || mat[posx][posy] != ' ') {
                printf("Jogada inválida. Tente novamente.\n");
                contador--; //
                continue;
            }

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
    printf("   1   2   3\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", i+1);
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
