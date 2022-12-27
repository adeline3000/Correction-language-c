#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declaration 
    int n, x, nbPos =0, nbNul=0, nbNeg=0, som_nbPos=0, Som_nbNeg=0;

    //saisie de n
    do
    {
        printf("Donner un entier N>0\n");
        scanf("%d",&n);
    } while (n<=0);

    //lire la suite des chiffres
    for (int i = 1; i <= n; i++)
    {
        printf("Veuillez saisir le nombre Numero %d ",i);
        scanf("%d",&x);

        //verifier la valeur de x
        if (x>0) 
        {
            nbPos++;
            som_nbPos += x;
        }
        else
        {
            if (x<0)
            {
                nbNeg++;
                Som_nbNeg += x;
            }
            else nbNul++; //x == 0   
        }    

    }

    printf("Le nombre des valeurs positives = %d et leur somme =  %d \n",nbPos,som_nbPos);
    printf("Le nombre des valeurs negatives = %d et leur somme =  %d \n",nbNeg,Som_nbNeg);
    printf("Le nombre des valeurs nulles = %d \n",nbNul);

    return 0;
}