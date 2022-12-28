#include <stdio.h>
#include <stdlib.h>

/* Programme qui fait une Rotation d'une position a gauche des colonnes d'une matrice */

int main()
{
    char A[20][30], T[20];
    int i, j, M, N;

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

    //affichaage avant rotation
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf(" %c", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Sauvegarder la derniere colonne 
    for(i = 0; i < N; i++)
        T[i] = A[i][M - 1];

    //rotation 
    j = M - 2;
    while (j >= 0)
    {
        for(i = 0; i < N; i++)
        {
            A[i][j + 1] = A[i][j];
        }
        j--;
    }

    //ajouter derniere colonne
    for(i = 0; i < N; i++)
        A[i][0] = T[i];


    //affichaage apres rotation
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf(" %c", A[i][j]);
        }
        printf("\n");
    }

    return 0;

}