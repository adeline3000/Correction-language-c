#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[20][30], T[20];
    int i, j, M, N, col;

    do
    {
        printf("Donner N compris entre 1 et 20\n");
        scanf("%d", &N);
    } while  ((N<1) || (N>20));

    do
    {
        printf("Donner M compris entre 1 et 29\n");
        scanf("%d", &M);
    } while  ((M<1) || (M>29));

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf(" %c", &A[i][j]);
        }
    }

    printf("\n");

    //remplissage du tableau
    printf("remplissage du tableau\n");
    for (i = 0; i < N; i++)
    {
        printf("t[%d]= ",i);
        scanf(" %c",&T[i]);
    }

    do
    {
        printf("Donner le numero de la colonne\n");
        scanf("%d", &col);
    } while  ((col<0) || (col>M));

    //affichaage avant l'ajout
    printf("affichaage avant l'ajout\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf(" %c", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //decalage
    j = M - 1;
    while (j >= col)
    {
        for(i = 0; i < N; i++)
        {
            A[i][j + 1] = A[i][j];
        }
        j--;
    }

    //ajouter la colonne
    for(i = 0; i < N; i++)
        A[i][col] = T[i];
    
    //affichaage apres insertion
    printf("affichaage apres insertion\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M+1; j++)
        {
            printf(" %c", A[i][j]);
        }
        printf("\n");
    }

    return 0;

}