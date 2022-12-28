#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t[100], n;
    do
    {
        printf("Donner un entier n>1 et n<=100 \n");
        scanf("%d",&n);
    } while (n<1 || n>100);
    
    for (int i = 0; i < n; i++)
    {
        printf("t[%d]= ",i);
        scanf("%d",&t[i]);
    }

    for (int i = n-1; i >= 0; i--)
    {
        printf("t[%d]= %d \n",i, t[i]);
    }

    return 0;
}