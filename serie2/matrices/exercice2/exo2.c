#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[20][30], Sum[20];
    int i, j, M, N, jmin, jmax, min, max, temp;

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
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");

    //calcul de la somme des colonnes de la matrice A et sauvegarde dans le vecteur SUM
    for(j = 0; j < M; j++)
    {
        Sum[j]=0;
        for(i = 0; i < N; i++)
        {
            Sum[j]+= A[i][j];
        }
    }

    //trouver le min et le max du vecteur
    min= Sum[0]; 
    max= Sum[0]; 
    jmin = 0;
    jmax = 0;
    
    for (i = 0; i < M; i++)
    {
        if (Sum[i] < min) 
        {
            min = Sum[i];
            jmin = i;
        }
        else 
            if(Sum[i] > max) 
            {
                max = Sum[i]; 
                jmax = i;
            }
    }

    //affichaage avant permutation
    printf("affichaage avant permutation\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("jmin = %d et jmax= %d \n",jmin, jmax);

    //permutation si jmin > jmax
    if (jmin > jmax)
    {
        for (i = 0; i < M; i++)
        {
            temp = A[i][jmin];
            A[i][jmin] = A[i][jmax];
            A[i][jmax] = temp;
        }

        printf("affichaage apres permutation\n");
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    }

    return 0;

}