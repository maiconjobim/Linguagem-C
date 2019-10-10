#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

int main()
{
    int condi = 0; 
	int t=4;
    int v1[4],v2[4];
    int max = 10;
	int pe= 0; 
	int res; 
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
   
    printf("*** *** DESAFIO PRODUTO ESCALAR DE DOIS VETORES! *** ***\n");
   
    
    
 
    	

		 for (int i=0;i<t;i++){
            v1[i]=(rand()%10);
            v2[i]=(rand()%10;
            
           }
           
         for (int i=0;i<t;i++) pe += v1[i] * v2[i];
         
         
		 printf("Qual o produto escalar desses dois vetores ?\n");
		 
		 for(int i=0;i<t;i++) printf("%d	",v1[i]);
         printf("\n");
		 for(int i=0;i<t;i++) printf("%d 	",v2[i]);
		 printf("\n");
         
		Sleep(1000*10);
        system ("CLS");
        
		printf("Qual o produto escalar desses dois vetores ?");
        
		scanf("%d",&res);
		
		
        if (pe != res){
			printf("Você Errou ! \n");
			condi= 1;
			} 
		
	if(condi != 1) printf("Parabéns, você acetrou \n");
	
	printf("O produto escalar dos dois vetores é  %d\n",pe);
	printf("FIM DO JOGO");
	getchar();
    return 0;
}
