#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[20][30];
    int i, j, nbrVoy, M, N;

    do
    {
        printf("Donner N compris entre 1 et 20\n");
        scanf("%d", &N);
    } while  ((N<1) || (N>20));

    do
    {
        printf("Donner M compris entre 1 et 30\n");
        scanf("%d", &M);
    } while  ((M<1) || (M>30));

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf(" %c", &A[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf(" %c", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    nbrVoy = 0;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            switch(A[i][j])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'u':
                case 'o':
                case 'y':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                case 'Y':
                    nbrVoy++;
                    break;
            }
        }
    }
    printf("Nombre de Voyelles dans la matrice: %d\n", nbrVoy);
    return 0;

}