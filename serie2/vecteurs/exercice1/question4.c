#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t[100], n, pos, val;
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

    printf("Donner la valeur a inserer \n");
    scanf("%d",&val);

    do
    {
        printf("Donner la position de la valeur a inserer \n");
        scanf("%d",&pos);
    } while (pos<0 || pos>n);

    int i=n-1;
    while (i >= pos)
    {
        t[i+1] = t[i];
        i--;
    }
    t[pos] = val;

    for (i = 0; i <= n; i++)
    {
        printf("t[%d]= %d \n",i, t[i]);
    }

    return 0;
}