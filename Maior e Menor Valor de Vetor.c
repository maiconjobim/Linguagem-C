#include <stdio.h>
#include <locale.h>

int main()
{
    int i,t=1;
    float v[t];
    setlocale(LC_ALL,"");
	
	printf("DETEC��O DO MAIOR VALOR\n");
   
    do{
    printf("Digite o Tamanho do Vetor(Tamanho M�ximo = 10) ");
    scanf("%d",&t);
    }while(t>10|t<=0);

printf("Digite %d n�meros reais separados por um espa�o ",t);
for(i=0;i<t;i++) scanf("%f",&v[i]);


float a= v[0];
for(i=0;i<t;i++){
    if (a < v[i]){
        a=v[i];
    }
}

float menor = a; 
for(i=0;i<t;i++){
   if (menor > v[i]){
        menor=v[i];
    }   
}  

 //for(int i=0;i<t;i++) printf("%d ",v[i]);
printf("O maior valor digitado � %3.1f \n", a );
printf("O menor valor digitado � %3.1f ", menor );



    getchar();
    return 0;
}