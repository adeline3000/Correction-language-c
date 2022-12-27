/*
Détermination du Max de trois nombres entiers ( A , B , C )
*/

#include<stdio.h> 
#include <stdlib.h>

int main()
{
    //declaration
    int A, B, C, max;

    //saisie des valeurs
    printf("Donnez trois nombres entiers:\n");
    scanf("%d%d%d", &A, &B, &C);

    //determination du max
    if(A > B)
    {
        if(A > C) max = A;
        else max = C;
    }
    else
    {
        if(B > C) max = B;
        else max = C;
    }

    //affichage
    printf("Maximum  = %d", max);

    return 0;
}
