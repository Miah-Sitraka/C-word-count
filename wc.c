#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fich10.h"
#include "fichier.c"
int main(int argc, char *argv[])
{
	printf("Création de la commande wc:\n");
///Données	
	const char *filename;                           //le nom du fichier à executer
	const char *option;                             //l'option
///test du nombre d'arguments	
	if(argc<2){
		fprintf(stderr,"Erreur,nombre d'arguments insuffisants\n");
		return 1;
	}
	
	if(argc==2){
		filename=argv[1];
		clines(filename);
		cwords(filename);
		cbytes(filename);
	}else if(argc==3){                    //Création de la commande wc avec option
		option=argv[1];
		filename=argv[2];
		  if(strcmp(option, "-l")==0){
			  clines(filename);
		  } else if (strcmp(option, "-w")==0){
			  cwords(filename);
		     } else if(strcmp(option,"-m")==0){
				 cbytes(filename);
			} else {
				fprintf(stderr,"Erreur,option invalide\n");
				return 1;
			}
		}			   	  	
return 0;	
}

		
	
		
	
			
	


