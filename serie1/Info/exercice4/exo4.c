#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int mois;
	printf("Veuillez saisir le numero du mois : ");
	scanf("%d",&mois);
    
    switch(mois)
    {
        case 12 :	
        case 1 :	
        case 2 :
            printf("La saison est l'hiver"); 
            break;
        case 3 : 	
        case 4 :
        case 5 :
            printf("La saison est le printemps"); 
            break;
        case 6 :	
        case 7 :	
        case 8 :	
            printf("La saison est l'ete"); 
            break;
        case 9:
        case 10: 
        case 11 :
            printf("La saison est l'automne"); 
            break;	
        default : 	
            printf("ce mois n'existe pas"); 
            break;
	}
	
	return 0;
}
