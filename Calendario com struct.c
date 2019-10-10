# include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
# include <string.h>
	#define h 10

	 
 void main()
 {
 	
 	
 	int eano;
 		struct Data
		{
			int mes;
			int dia,ano;
			
		}data_nascim;
		
		printf("Digite o ano para gerar o calendario ");
	 	scanf("%d",&eano);
		
		
		data_nascim.ano =eano;
		FILE*p;
		p= fopen("Novocalendario.TXT","w");
		
		for(int i=0 ;i<31;i++){	
	
		
			data_nascim.dia = i+1;
			for(int j=0;j<12;j++){
				
				data_nascim.mes= j+1;
				
				if ((data_nascim.mes == 2 && data_nascim.dia >28) || (data_nascim.mes == 4 && data_nascim.dia >30) || (data_nascim.mes == 6 && data_nascim.dia >30) ||(data_nascim.mes == 9 && data_nascim.dia >30) || (data_nascim.mes == 11 && data_nascim.dia >30) ){
					
				fprintf(p,"\t\t");
					
				}else fprintf(p,"%5d/%d/%d\t",data_nascim.dia,data_nascim.mes,data_nascim.ano);	
				
			}
			
		//printf("\n");
		fprintf(p,"\n");
		} 
		
	fclose(p);

 }
