#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t[100], n, val, cpt=0;

    printf("donner val \n");
    scanf("%d",&val);

    do
    {
        printf("Donner un entier n>1 et n<=100 \n");
        scanf("%d",&n);
    } while (n<1 || n>100);
    
    for (int i = 0; i < n; i++)
    {
        printf("t[%d]= ",i);
        scanf("%d",&t[i]);
        if (t[i] == val) cpt++;
    }
    
    printf("le nombre d'occurence de %d est = %d \n",val,cpt);

    return 0;
}