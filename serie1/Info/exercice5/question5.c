#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //to use the boolean type

int main()
{
   int nbr;
   bool estPremier = true;
   do
    {
        printf("Entrez un nombre positif: ");
        scanf("%d", &nbr);
    } while (nbr < 0); 

   /*
   les nombres 0 et 1 ne sont pas premiers : 
   1 n'est pas premier car il n'a qu'un seul diviseur entier positif, 
   et 0 non plus car il est divisible par tous les entiers positifs.
   */
   if(nbr == 0 || nbr == 1) estPremier = false;

   int i=2;
   while (i<=nbr/2 && estPremier) // estPremier <=> estPremier == true
   {
        if(nbr%i == 0) estPremier = false; //nbr est divisible par i
        else i++;   
   }
   
   if(estPremier) // estPremier <=> estPremier == true
   {
      printf("%d est un nombre premier.",nbr);
   }
   else
   {
      printf("%d n'est pas un nombre premier.",nbr);
   }

   return 0;
}