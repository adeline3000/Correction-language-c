#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declaration 
    int n, nbOccur=0;
    float x,val;

    //saisie de n
    do
    {
        printf("Donner un entier N>0\n");
        scanf("%d",&n);
    } while (n<=0);

    //lire le premier chiffre
    printf("Introduire la valeur de VAL : ");
    scanf("%f",&val);

    //lire la suite des chiffres
    for (int i = 1; i <= n; i++)
    {
        printf("Veuillez saisir le nombre Numero %d ",i);
        scanf("%f",&x);

        //traitement
        if(x == val) nbOccur++; 
    }
    
    printf("Le nombre d'occurrences de %.2f est : %d \n",val,nbOccur); 
    // %.2f pour afficher un reel avec 2 chiffres apres la virgule

    return 0;
}