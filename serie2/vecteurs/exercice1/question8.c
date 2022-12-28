#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t[100], n, i, j, temp;
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
    
    //Chercher la premiere sequence croissante de T (si elle existe)
    i = 0;
    while ((i < n-1) && (t[i] >= t[i+1])) i++;
    
    if (i < n-1) /* Il y'a une sequence croissante dans T */
    {
        // Detecter la fin de la sequence 
        j = i + 1;
        while ((j < n-1) && (t[j] < t[j+1])) j++;
        
        //Permuter La 1ere sequence croissante 
        while (i < j)
        {
            temp = t[i];
            t[i] = t[j];
            t[j] = temp;
            i++;
            j--;
        }
    }
    
    printf("Vecteur avec premiere sequence croissante inversee:\n");
    for (i = 0; i< n; i++)
    {
        printf("%d ",t[i]);
    }

    return 0;
}


    