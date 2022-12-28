#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t[100], n, i, a,b, distMin, k, j, dist;
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
    
    printf("Donner Entier  A appartenant a T\n");
    scanf("%d", &a);

    printf("Donner Entier  B appartenant a T est different de A\n");
    scanf("%d", &b);
    
    distMin = n;
    i = 0;
    // Parcourir le tableau T jusqu'a trouver la 1ere occurrence de A ou B
    while ( (i < n-1) && (t[i] != a) && (t[i] != b) ) i++;
    k = i;   // sauvegarder dans k la position de la 1ere occurrence de A ou B

    // continuer le parcours de T a partir de (i + 1)
    for (j = i + 1; j < n; j++)
    {
        /* si on trouve une nouvelle occurrence de A ou B et si cette occurrence n'est pas la meme
        que la precedente (T[J] # T[k]) alors on a un couple (A, B) ou (B, A) et dans ce cas calculer
        la distance et voir si cette distance est minimale.*/

        if  ((t[j] == a) || (t[j] == b))
        {
            if (t[j] != t[k])
            {
                dist = j - k;
                if (dist < distMin) distMin = dist;
            }
            k = j;
        }

    }

    if (distMin == n)
        printf("%d ou %d ne sont pas dans T\n", a, b);
    else
        printf("Distance Minimale entre %d et %d est: %d\n", a, b, distMin);

    return 0;
}


    