#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
setlocale  (LC_ALL,"");
int *ptr, vetor[6] = {3,7,4,9,5,12};
int i;
ptr = &vetor[0];

printf("O conteudo do elemento do vetor apontado pelo ponteiro é %d\n",*ptr);

ptr++;

printf("O conteudo do elemento do vetor apontado pelo ponteiro é %d\n",*ptr);

for( i=1 ;i<=4;i++)
{
   printf("O conteudo do elemento do vetor apontado pelo ponteiro é %d\n",ptr[i]); 
}

getchar();
return(0);    
}
