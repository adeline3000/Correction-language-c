#include <stdio.h>

#include <stdlib.h>

 

/* Programme qui affiche la plus longue sequence croissante d'un vecteur */

int main()

{

    int t[100], n, i, l, lMax=0, iFin;
    do
    {
        printf("Donner un entier n>1 et n<100 \n");
        scanf("%d",&n);
    } while (n<1 || n>=100);
    
    for (i = 0; i < n; i++)
    {
        printf("t[%d]= ",i);
        scanf("%d",&t[i]);
    }

   i = 0;
   while (i < n-1)
   {
        /* Boucler sur séquence croissante */
        l=0;
        while ((i < n-1) && (t[i] <= t[i + 1]))
        {
            i++;
            l++;
        }

        if (l > lMax)
        {
            iFin = i;
            lMax = l+1;
        }

        /* Boucler sur séquence decroissante */
        l=0;
        while ((i < n-1) && (t[i] >= t[i + 1]))
        {
            i++;
            l++;
        }

        if (l > lMax)
        {
            iFin = i;
            lMax = l+1;
        }
    }
    
    for (i = iFin-lMax+1; i<= iFin; i++)
    {
        printf("%d ",t[i]);
    }

    return 0;
}


    