#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	#define l 150
	#define c 20
	
	
	 
 int main(){
 	FILE*p;
 	p=fopen("SAIDA.TXT","w");
 	srand(time(NULL));
 	
 	int vetor[l][c];
 	int k =0;
	int result[l];
	int t =0;
	
	for(int i=0;i<l;i++){
		printf ("vetor %d=  ",i+1);
		fprintf (p,"vetor %d=  ",i+1);
		
			for(int j=0;j<c;j++){
			
			vetor[i][j]= (rand()%101)+100;
			printf ("%5d",vetor[i][j]);
			fprintf (p,"%5d",vetor[i][j]);			
			
			if(vetor[i][j]==200){
			 	k++;
			 	if(k==1){
				 result[t]=i+1;
				 t++;
				}
			}
			
			}
		if (k==1) {
		printf(" <-- Aqui tem 200");
		fprintf(p," <-- Aqui tem 200");
		
			}
		k=0;
			
		printf("\n\n");
		fprintf(p,"\n\n");
	}
	
	
	printf("O valor 200 aparace no(s) vetor(es): ");
	fprintf(p,"O valor 200 aparace no(s) vetor(es): ");
	
	for(int i=0;i<t;i++){
		if(i!=(i+1))
			printf("%4d", result[i]);
			fprintf(p,"%4d", result[i]);
		}
	
	 	
	 
 	
 	fclose(p);
 	
 	getchar();
 	return 0;
 }
