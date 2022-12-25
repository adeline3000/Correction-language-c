#include<stdio.h>
#include <stdlib.h>

int main()
{
    int mirroir=0, reste, nbr;
    do
    {
        printf("Entrez un entier positif : ");
        scanf("%d", &nbr);
    } while (nbr <= 0); 

    reste = nbr;

    while (reste > 0)
    {
        mirroir = mirroir * 10 + reste % 10;
        reste/=10; //reste = reste / 10;
    }
    
    printf("le miroir de %d est %d",nbr,mirroir);

    return 0;
}