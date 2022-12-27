#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    //declaration 
    float a,b,c,delta;

    //saisie des valeurs
	printf("Veuillez introduire les valeurs de a,b et c : ");
	scanf("%f %f %f",&a,&b,&c); //on suppose que l'utilisateur 

    if(a==0) // bx + c = 0
    {
        if(b==0) // c = 0
        {
            if(c==0) printf("infinite de solutions\n"); // 0 = 0
            else printf("pas de solution\n"); // exemple: 7 = 0
        }
        else
        {
            float x1 = -c/b;
            printf("la solution est %f",x1);
        }
    }
    else
    {
        //calculer delta
	    delta = pow(b,2)-4*a*c; //pow(b,2) <=> b^2
        if (delta<0)
        {
            printf("Pas de solutions reelles\n");
        }	
        else 
        {
            if (delta==0)
            {
                float x1 = (-b)/(2*a);
                printf("la solution est %f",x1);
            }
            else //delta > 0
            {
                float x1= (-b-sqrt(delta))/(2*a); //sqrt(delta) <=> racine carre de delta
                float x2= (-b+sqrt(delta))/(2*a);
                printf("les solution sont %f et %f",x1,x2);
            }
        }
    }
	
	return 0;
	
}

