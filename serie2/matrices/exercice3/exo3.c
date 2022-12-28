#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int A[25][25], trace, pos1, pos2i, pos2j, max1, max2, inverse, temp, N, i, j;

    do
    {
        printf("Donner N compris entre 1 et 20\n");
        scanf("%d", &N);
    } while  ((N<1) || (N>25));

    //Remplir la matrice
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            do
            {
                printf("A[%d][%d] = ", i, j);
                scanf("%d", &A[i][j]);
            } while  (A[i][j]<0 || A[i][j]>9);
        }
    }
    printf("\n");

    //affichaage avant permutation
    printf("affichaage avant permutation\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //initialisation des var
    max1 = A[0][0];
    pos1 = 0;
    trace =0;
    max2 = A[0][N-1];
    pos2i = 0;
    pos2j = N-1;
    for(i = 0; i < N; i++)
    {
        //calculer la trace
        trace += A[i][i];
        //le max et sa position de la diagonale principale
        if (A[i][i] > max1) 
        {
            max1 = A[i][i];
            pos1 = i;
        } 
        //le max et sa position de la diagonale secondaire
        if (A[i][N-i-1] > max2) 
        {
            max2 = A[i][N-i-1];
            pos2i = i;
            pos2j = N-i-1;
        } 
    }
    printf(" trace = %d \n max de la diagonale principale = A[%d][%d] = %d \n max de la diagonale secondaire = A[%d][%d] = %d  \n",trace, pos1, pos1, max1, pos2i, pos2j, max2);

    //permutation des diagonales
    for(i = 0; i < N; i++)
    {
        temp = A[i][i];
        A[i][i] = A[i][N-i-1];
        A[i][N-i-1] = temp;
    }

    //affichaage avant permutation
    printf("affichaage apres permutation\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //inverse diagonale
    i = N-1;
    inverse = 0;
    while (i>=0)
    {
        inverse = inverse*10 + A[i][i];
        i--;
    }
    printf("L'inverse du nombre forme par les chiffres de la diagonale principale = %d \n",inverse);
    
    //verifier si triangulaire inferieur
    bool triang = true;
    i = 0;
    while (i<N-1 && triang)
    {
        j = i+1;
        while (j<N && triang)
        {
            if (A[i][j] != 0)
            {
                triang = false;
            }
            j++;
        }
        i++;
    }
    if(triang) printf("La matrice A est triangulaire inferieure \n");
    else printf("La matrice A n'est pas triangulaire inferieure \n");

    return 0;

}