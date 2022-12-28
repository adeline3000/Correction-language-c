#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100], n, temp;
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

    int i = 0 ;
    while (i < n && t[i]<0)
        i++ ;

    int j = i + 1 ;
    while (j < n)
    {
        if ( t[j]<0 )
        {
            temp = t[i] ;
            t[i] = t[j];
            t[j] = temp;
            i++ ;
        }
        j++;
    }

    printf("Vecteur avec valeur < 0 au debut:\n");
    for(i = 0; i < n; i++)
    {
        printf("t[%d]= %d \n",i, t[i]);
    }

    return 0;
}