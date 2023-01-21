#include <stdio.h>
#include <stdlib.h>
int main(){
	int tab[100], n,j;
	do{
        printf("Donner la taille du tableau: ");
        scanf("%d", &n);
    }while(n<1 || n>100); //1) pour permettre à l'utilisateur de saisir une taille de tableau valide

    /*2) Les tableaux en C commencent à l'index 0 et la dernier index est n-1
    Il devrait donc être écrit comme ci dessous pour que la boucle parcoure tous les éléments du tableau.
    Cette erreur peut causer des erreurs de calculs ou des erreurs de mémoire.
    Il est donc important de corriger cette erreur pour que le programme fonctionne correctement.*/
    for (int i = 0; i < n; i++){
    	do{
            /*3) utiliser la notation de format pour afficher la variable i*/
	        printf("T[%d]= ", i);
            /*4) passer l'adresse de l'élément du tableau pour pouvoir stocker la valeur saisie*/
	        scanf("%d", &tab[i]);
	        j = 0;
            /*5) La condition logique "ET" est "&&" au lieu de "&" */
	        while(j<i && tab[j] != tab[i]) j++; //for(j=0; j<i && tab[j] != tab[i]; j++); 
            /*6) La condition d'inégalité est "!=" au lieu de "<>"
            ajouter "}" avant le while, pour inclure cette boucle dans le "do-while" */
	    }while(j!=i || tab[i]<1 || tab[i]>26); 
        //7)supprimer le "}" en plus
    }
    printf("\nTableau :\t");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",tab[i]);
    }
    printf("\n");

    //question 4
    char c;
    // comme le tableau ne contient pas de chiffres en double alors on aura besoin d'un seul compteur
    int cpt = 0; 
    for(int i=0;i<n;i++)
    {
        /*calculer la valeur ASCII de la lettre correspondante au chiffre du tableau*/
        c = 'A' + tab[i] -1; 
        /*si la lettre est B, I, N, G ou O, incrémenter le compteur*/
        switch(c)  
        {
            case 'B' : 
            case 'I' : 
            case 'N' : 
            case 'G' : 
            case 'O' : cpt++; break;
        }
    }
    /*si le compteur est égal à 5, 
    cela signifie que toutes les lettres B,I,N,G,O sont présentes dans le tableau*/
    if (cpt == 5) printf("WIN\n");
    else printf("LOSE\n");



	return -3; // n'est pas une erreur, on écrit return 0; par convention
}