#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int mois;
	printf("Veuillez saisir le numero du mois : ");
	scanf("%d",&mois);
    
    switch(mois)
    {
        case 2 :
            printf("le nombre de jour est 28 ou 29"); 
            break;
        case 1 :	
        case 3 :	
        case 5 : 	
        case 7 :
        case 8 :
        case 10:
        case 12: 
            printf("le nombre de jour est 31"); 
            break;
        case 4 :	
        case 6 :	
        case 9 :	
        case 11 :	
            printf("le nombre de jour est 30"); 
            break;
        default : 	
            printf("ce mois n'existe pas"); 
            break;
	}
	
	return 0;
}
