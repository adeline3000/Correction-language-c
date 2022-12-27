#include<stdio.h>
#include <stdlib.h>

int main()
{
    int somme=0, reste, nbr;
    do
    {
        printf("Entrez un entier positif : ");
        scanf("%d", &nbr);
    } while (nbr <= 0); 

    reste = nbr;

    while (reste > 0)
    {
        somme += reste%10; //somme = somme + reste mod 10;
        reste/=10; //reste = reste / 10;
    }
    
    printf("la somme des chiffres qui compose %d est %d",nbr,somme);

    return 0;
}