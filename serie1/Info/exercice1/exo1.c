#include <stdio.h>
#include <stdlib.h>

int main()
{
    float u1,u2,q1,q2, facture, remise;
    printf("Donner U1 U2 Q1 et Q2 respectivement: \n");
    scanf("%f%f%f%f",&u1,&u2,&q1,&q2);
    facture = u1*q1 + u2*q2;
    if (facture > 2000)
    {
        remise = facture/10;
        facture -=remise; //facture = facture - remise;
    }
    printf("La facture est = %.2f",facture); //%.2f pour ecrire un float avec 2 chiffres apres la virgule
    
    return 0;
}