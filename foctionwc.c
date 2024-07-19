void clines(const char *file)
{
	FILE *f=fopen(file,"r");
	if(f==NULL){
		printf("Ouverture du fichier impossible\n");
	    return;
	}
	char line[250];
	int comptl=0;
	while(fgets(line,sizeof(line),f)!=NULL){
		comptl++;
	}
	
	printf("%d lignes\n", comptl);
	fclose(f);
}		
void cwords(const char *file)
{
	FILE *f=fopen(file,"r");
	if(f==NULL){
		printf("Ouverture du fichier impossible\n");
	    return;
	}
	char c;
	int comptm=1;
	while((c=fgetc(f))!=EOF){
		if(c=='\n'){
			comptm++;
		}
	}
	printf("%d mots\n", comptm);
	fclose(f);
}

void cbytes(const char *file)
{
	
	FILE *f=fopen(file,"rb");
	if(f==NULL){
		printf("Ouverture du fichier impossible\n");
	    return;
	}
	unsigned long tobytes=0;
	while(fgetc(f)!=EOF){
		tobytes++;
	}
	printf("%lu octets %s\n", tobytes,file);
	fclose(f);
}
