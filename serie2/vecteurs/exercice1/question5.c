#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100], n, i, j;
    do
    {
        printf("Donner un entier n>1 et n<100 \n");
        scanf("%d",&n);
    } while (n<1 || n>=100);
    
    for (int i = 0; i < n; i++)
    {
        printf("t[%d]= ",i);
        scanf("%d",&t[i]);
    }

    j = 0;
    for (i = 0; i < n; i++)
    {
        t[j] = t[i];
        //Si T[i]=0 alors J n'est pas incrémenté   
        if (t[i] != 0) j++; //Incrémenter le J uniquement si T[i] est != 0
    }
    
    if (j == 0)
        printf("Vecteur Sans Valeur Nulle est Vide\n");
    else
    {
        printf("Vecteur Sans Valeur Nulle:\n");
        for(i = 0; i < j; i++)
        {
            printf("t[%d]= %d \n",i, t[i]);
        }
    }

    return 0;

}