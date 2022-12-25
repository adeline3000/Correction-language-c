#include<stdio.h>
#include <stdlib.h>

int main()
{
    int somme=0, reste, nbr, x, chiffre, cpt=0;
    do
    {
        printf("Entrez un entier positif : ");
        scanf("%d", &nbr);
    } while (nbr <= 0); 

    do
    {
        printf("Entrez un entier positif : ");
        scanf("%d", &chiffre);
    } while (chiffre < 0 || chiffre > 9); // 0<= chiffre < 10

    reste = nbr;
    while (reste > 0)
    {
        x = reste%10;
        if(x == chiffre) cpt++;
        reste/=10; //reste = reste / 10;
    }
    
    printf("nombre d'occurrences de %d dans %d est %d",chiffre, nbr, cpt);

    return 0;
}