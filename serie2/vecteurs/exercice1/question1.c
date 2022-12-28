#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t[100], n, min, max, prodPos=1, nbNeg=0, sumNeg=0;
    float moyNeg;
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

    min = t[0]; 
    max = t[0];

    for (int i = 0; i < n; i++)
    {
        if (t[i] < min) min = t[i];
        else if(t[i] > max) max = t[i]; 

        if (t[i] < 0) 
        {
            nbNeg++;
            sumNeg+= t[i];
        }
        else if(t[i] > 0) prodPos *= t[i]; 
    }

    if (nbNeg > 0) moyNeg = sumNeg/nbNeg;
    else moyNeg =0;
    
    printf(" max = %d \n min = %d \n produit des valeurs positives = %d \n moyenne des valeurs negatives = %f \n",max,min,prodPos,moyNeg);

    return 0;
}