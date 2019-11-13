#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
setlocale  (LC_ALL,"");
int *ptr, vetor[6] = {3,7,4,9,5,12};
int i;

 printf("Vetor original ->");
for (i=0 ; i<6;i++)
{
   printf("%6d",vetor[i]);
}

printf("\n\n");
ptr = &vetor[0];

for (i=0 ; i<6;i++,ptr++)
{
    printf("O conteudo do elemento do vetor apontado pelo ponteiro é %d\n",*ptr);
    ptr+=1;
    printf("O mesmo  elemento do vetor agora vale %d\n",*ptr);

}

    printf("prova de que o vgetor foi modificado ->");

for (i=0 ; i<6;i++)
{
   printf("%6d",vetor[i]);
}


printf("\n\n");

for (i=0 ; i<6;i++,ptr++)
{
    printf("O conteudo do elemento do vetor apontado pelo ponteiro é %d\n",*ptr);
    *ptr = ptr*i ;
    printf("O mesmo  elemento do vetor agora vale %d\n",*ptr);

}
 printf("O vetor foi NOVAMENTE modificado ->");

for (i=0 ; i<6;i++)
{
   printf("%6d",vetor[i]);
}

printf("\n\n");


return(0);    
}
