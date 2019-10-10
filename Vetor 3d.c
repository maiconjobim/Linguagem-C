#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	#define h 100
	#define l 4
	#define c 4
	 
 int main(){
 	FILE*p;
 	p=fopen("SAIDA.TXT","w");
 	srand(time(NULL));
 	int r [h][l][c];
	 
	for(int k=0;k<h;k++){
	
	 	for (int i=0;i<l;i++){
	 		for (int j=0;j<c;j++){
	 			r[k][i][j]=(rand()%9);
	 			printf("%5d",r[k][i][j]);
	 			fprintf(p,"%5d",r[k][i][j]);
	 			
		 	}
		 printf("\n");
		 fprintf(p,"\n");
	 	} 
	printf("\n");
	fprintf(p,"\n");
 	}
 	
 	 fclose(p);
 	
 	getchar();
 	return 0;
 }
