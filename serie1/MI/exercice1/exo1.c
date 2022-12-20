#include<stdio.h> 
#include <stdlib.h>

int main()
{
    //declaration
    int secondes;

    //saisie des valeurs
	printf("Veuillez saisir la durée en seconde : ");
	scanf("%d",&secondes);

    //calculer les heures minutes et secondes
    int heures = secondes / 3600 ;
    int minutes = secondes % 3600 / 60;
    secondes = secondes % 3600 % 60;
	
	printf("\n%d heures %d minutes %d secondes",heures,minutes,secondes);

    return 0;
}
