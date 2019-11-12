#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
setlocale  (LC_ALL,"");
int *ptr1,*ptr2;
int n1 =5 , n2 =200;

 n2 =5;
 n1=200;  //Uando este para trocar a ordem de declaração das variáveirs

ptr1 = &n1;

ptr2 = &n2;

if(ptr1>ptr2)
{
    printf("CASO 1: A CONDIÇÃO É VERDADEIRA \n\n");
    printf("COM USO DE PONTEIRO\n\n");
    printf("O valor endereço de n1 é maior do que de n2 ; \n\n ");
    printf("O endereço de n1 (n1 este que vale %d) é igual a %d(em decimal)\n",*ptr1,ptr1);
    printf("ou %p (em hexadecimal)\n",ptr1);
    
    printf("O endereço de n2 (n2 este que vale %d) é igual a %d(em decimal)\n",*ptr2,ptr2);
    printf("ou %p (em hexadecimal)\n \n \n",ptr2);
    
    printf("SEM USO DE PONTEIROS \n\n");
   
    printf("O valor endereço de n1 é maior do que de n2 ; \n\n ");
    printf("O endereço de n1 (n1 este que vale %d) é igual a %d(em decimal)\n",n1, &n1);
    printf("ou %p (em hexadecimal)\n",&n1);
    
    printf("O endereço de n2 (n2 este que vale %d) é igual a %d(em decimal)\n",n2,&n2);
    printf("ou %p (em hexadecimal)\n \n \n",&n2);
}else
{
    printf("CASO 2: A CONDIÇÃO É VERDADEIRA \n\n");
    printf("COM USO DE PONTEIRO\n\n");
    printf("O valor endereço de n2 é maior do que de n1 ; \n\n ");
    printf("O endereço de n2 (n2 este que vale %d) é igual a %d(em decimal)\n",*ptr2,ptr2);
    printf("ou %p (em hexadecimal)\n",ptr2);
    
    printf("O endereço de n1 (n1 este que vale %d) é igual a %d(em decimal)\n",*ptr1,ptr1);
    printf("ou %p (em hexadecimal)\n \n \n",ptr1);
    
    printf("SEM USO DE PONTEIROS \n\n");
   
    printf("O valor endereço de n2 é maior do que de n1 ; \n\n ");
    printf("O endereço de n2 (n2 este que vale %d) é igual a %d(em decimal)\n",n2, &n2);
    printf("ou %p (em hexadecimal)\n",&n2);
    
    printf("O endereço de n1 (n1 este que vale %d) é igual a %d(em decimal)\n",n1,&n1);
    printf("ou %p (em hexadecimal)\n \n \n",&n1);
    
}







getchar();
return(0);    
}
