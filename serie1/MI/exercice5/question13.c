/*
Question: Calcul de la somme des nombres semi-premiers dans l'intervalle de 1 a N
Definition: un nombre semi-premier est egal au produit de 2 nombres premiers differents.
Exemples: 
    15=3*5, 22=2*11, 35=5*7: sont des semi-premiers; 
    25=5*5, 27=3*9: ne sont pas des semi-premiers.
*/
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> //to use the boolean type

int main()
{
    int n, i, nbr1, nbr2, somme=0;
    bool estPremier;

    do
    {
        printf("Entrez un nombre > 0 : ");
        scanf("%d", &n);
    } while (n <= 0); 

    for (nbr1 = 2; nbr1 <= n; nbr1++)
    {
        //verifier si nbr1 est premier
        estPremier = true;
        i=2;
        while (i <= nbr1/2 && estPremier) // estPremier <=> estPremier == true
        {
            if(nbr1%i == 0) estPremier = false; //nbr1 est divisible par i
            else i++;   
        }
        if(estPremier) //si nbr1 est premier 
        {
            //chercher un 2eme nombre premier 
            for (nbr2 = 2; nbr2 < nbr1; nbr2++) // nbr2 < nbr1 pour eviter les repetitions comme : 2*3 et 3*2
            {
                
                //verifier si nbr2 est premier
                estPremier = true;
                i=2;
                while (i <= nbr2/2 && estPremier) // estPremier <=> estPremier == true
                {
                    if(nbr2%i == 0) estPremier = false; //nbr1 est divisible par i
                    else i++;   
                }
                if(estPremier) ////si nbr2 est premier => nbr1 et nbr2 sont premiers
                {
                    somme += (nbr1 * nbr2); //(nbr1 * nbr2) est un nombre semi premier
                    //printf("somme + (%d * %d) = %d \n",nbr1,nbr2,somme);
                }  
            }
            
        }

    }
    printf("la somme des nombres semi-premiers dans l'intervalle de 1 a %d = %d \n",n,somme);
    
    
    return 0;
}