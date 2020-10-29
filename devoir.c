#include<stdio.h>
#include<stdlib.h>

/* Ici les 2 premierers sont lignes
   sont les directives preproceseurs 
   c'est a l'aide de ses lignes que nous 
   pouvons utilise la fonction printf
   qui nous permet d'afficher quelque chose */

int main (int argc, int *argv[]){
	printf("Devoir de Cherilus Sam Bracley \n");


	printf("Veuillez renter votre annee de naissance \n");
	int ask;													// cette variable contient l'annee de naissance de l'utilisateur
	int operation;  											//cette variable realise l'operation necessaire afin de savoir l'age de la personne
	int current_year; 											//cette variable contient l'annee actuelle



	current_year=2020;											//initialisation de la variable en ajoutant l'annee actuelle
	scanf("%d", &ask);											// a l'aide de scanf l'utilisateur peu maintenant nous faire part de l'annee





// ----------------------------------------------Les differents types de test a effectuer ---------------------------------------------------------------



    //Verification de l'annee par rappoort a l'annee actuelle 

	if(ask < current_year){
		printf("Desole mais l'anne que vous devez mettre ne doit pas etre superieur que l'anne actuelle \n");
	}


	//Petite Verification du type de donnee  

	if(ask==0){
		printf("\n Vous avez surment mis un mauvais character\n d'ou la presence de 0 \n Veuillez inserer un bon charactere afin d'assurer le bon deroulement du programmer ");
	}



	// l'operation se realise ici
	operation=current_year-ask;



	//Verification du statut de l'utilisateur  

	if(operation<18){
		printf("\n Vous n'etes pas encore majeur \n");
	}


	if (operation>=18){
		printf("Vous etes deja majeur");
	}


	//L'affichage de l'age de l'utilisateur 
	printf(" \nVous avez %d ans.",operation);


 /*contact(MAIL):cherilussambracley@gmail.com 
 contact(github):cherilussambracley*/


	//Merci de me soummettre vos suggestions ;)
}


