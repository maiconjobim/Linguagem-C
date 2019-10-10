#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

int main()
{
    int condi = 0; 
	int t=5;
    int v1[t],v2[t];
    int max = 10;
	int lim ;
    int cond =0 ;  
    
    setlocale(LC_ALL, "Portuguese");
   
    printf("*** *** ACERTE A SEQUÊNCIA DE NÚMEROS! *** ***\n");
   
    do{
    printf("Escolha o tamanho da sequência (entre 5 e 10 números)\n");
    scanf("%d",&t);
    }while(t>max|t<5);
    
     srand(time(NULL));
    	
	do{
	 printf("DIGITE O VALOR MÁXIMO DOS NÚMEROS ALEATÓRIOS (LIMITE 100) \n");
    	 scanf("%d",&lim);
        }while(lim<0|lim>100); 
		 
		 for (int i=0;i<t;i++){
            v1[i]=((rand()%lim)+1);
           }
        
		printf("memorize a sequência: ");
		
		for(int i=0;i<t;i++) printf("%d ",v1[i]);
        
		Sleep(1000*t);
        system ("CLS");
        
        printf("digite a sequência anterior ");
        for(int i= 0;i<t;i++) scanf("%d",&v2[i]);
        
        for(int i=0;i<t; i++) {
		if (v1[i] != v2[i]){
			printf("Infelizmente você errou os números !!! :-(");
			condi= 1;
			break;
			} 
		}
	if(condi != 1) printf("Parabéns, você acertou todos os numeros!!! :-D");
	
	//printf("\n");
	//for(int i=0;i<t;i++) printf("%d ",v1[i]);
	//printf("\n");
	//for(int i=0;i<t;i++) printf("%d ",v2[i]);
	
	getchar();
    return 0;
}
