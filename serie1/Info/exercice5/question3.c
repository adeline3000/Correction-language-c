#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declaration 
    int n, x, max, min;

    //saisie de n
    do
    {
        printf("Donner un entier N>0\n");
        scanf("%d",&n);
    } while (n<=0);

    //lire le premier chiffre
    printf("Veuillez saisir le nombre Numero 1 ");
    scanf("%d",&x);

    //initialiser min et max
    min = x;
    max = x;

    //lire la suite des chiffres
    for (int i = 2; i <= n; i++)
    {
        printf("Veuillez saisir le nombre Numero %d ",i);
        scanf("%d",&x);

        //traitement
        if (x>max) max = x;
        else if (x<min) min = x;
    }

    printf("Le Minimum des valeurs est: %d, le Maximum est : %d \n",min,max);

    return 0;
}