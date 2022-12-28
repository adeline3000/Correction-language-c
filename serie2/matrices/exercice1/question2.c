#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[20][30], car;
    int i, j, M, N;

    do
    {
        printf("Donner N compris entre 1 et 20\n");
        scanf("%d", &N);
    } while  ((N<=1) || (N>=20));

    do
    {
        printf("Donner M compris entre 1 et 30\n");
        scanf("%d", &M);
    } while  ((M<=1) || (M>=30));

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("t[%d][%d] = ", i, j);
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
    printf("donner un caractere a recherche : ");
    scanf(" %c",&car);

    i=0;
    while (i<N && A[i][j] != car)
    {
        j=0;
        while (j<M && A[i][j] != car)
        {
            j++;
        }
        i++;
    }
   
    if(i==N && j==M) printf("%c n'existe pas dans la matrice\n", car);
    else printf("%c existe dans la matrice\n", car);
    
    return 0;

}