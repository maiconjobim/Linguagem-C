#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define max 30

int main(){
	setlocale(LC_ALL,"");
    int i,t;
    float v1[t],v2[t];
    float soma=0;
   
    int cond ;  
    int limite;
    printf("PRODUTO ESCALAR DE DOIS VETORES\n");
   
   
 
do{
printf("Voc� deseja que os vetores sejam preenchidos aleatoriamneto (1 = sim : 0 = n�o)");
scanf("%d",&cond);
}while(cond>1 | cond<0);
 
FILE*p;
p=fopen("RESULTADO.TXT","w");
    
    
    if(cond == 1){
    	
    	 do{
    printf("Digite o Tamanho dos Vetores (Tamanho Maximo = %d) ",max);
    scanf("%d",&t);
    }while(t>max|t<=0);
    

        srand(time(NULL));
		printf("Qual o limite superior para os numeros aleat�rios ");
        scanf("%d",&limite);
        limite+=1;
        for (int i=0;i<t;i++){
            float a1=(rand()%limite); // salva um numero aleat�rio
            float a2=(rand()%limite);// salva um numero aleatorio 
			v1[i]=a1/100; // divide o numero aleatorio para gerar real.
            v2[i]=a2/100; // divide o numero aleatorio para gerar real.
            }
        printf("V1= ");
		for(int i=0;i<t;i++) printf("%.2f ",v1[i]);
        printf("\n");
        printf("V1= ");
		for(int i=0;i<t;i++) printf("%.2f ",v2[i]);
     	
		 // print no txt o valor dos vetores aleatorios 
     	fprintf(p,"V1= ");
		 for(int i=0;i<t;i++) fprintf(p,"%.2f ",v1[i]);
        fprintf(p,"\n");
        fprintf(p,"V2= ");
        for(int i=0;i<t;i++) fprintf(p,"%.2f ",v2[i]);
        //
	 	
		for(i=0;i<t;i++){
    	soma+=v1[i]*v2[i];
        
        
        }
		printf("\nO produto escalar dos dois vetores: %.2f ",soma);
		fprintf(p,"\nO produto escalar dos dois vetores: %.2f ",soma);
    }else{
    	
    	 do{
    		printf("Digite o Tamanho dos Vetores (Tamanho Maximo = %d) ",max);
    		scanf("%d",&t);
    		}while(t>max|t<=0);
	   
	printf("Digite n�meros reais do v1 separados por um espa�o ");
	for(i=0;i<t;i++) scanf("%f",&v1[i]);

	printf("\nDigite n�meros reais do v2 separados por um espa�o ");
	for(i=0;i<t;i++) scanf("%f",&v2[i]);

    for(i=0;i<t;i++){
    soma+=v1[i]*v2[i];
    }

	//print no txt o valor dos vetores digitados
	fprintf(p,"V1= ");
	for(int i=0;i<t;i++) fprintf(p,"%.2f ",v1[i]);
	fprintf(p,"\n");
	fprintf(p,"V2= ");
	for(int i=0;i<t;i++) fprintf(p,"%.2f ",v2[i]);
	//

	printf("\nO produto escalar dos dois vetores � %.2f ",soma);
	fprintf(p,"\nO produto escalar dos dois vetores � %.2f ",soma);
}

fclose(p);

    getchar();
    return 0;
}