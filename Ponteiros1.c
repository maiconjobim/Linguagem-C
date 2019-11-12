#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
setlocale  (LC_ALL,"");
int *pn;
char *pc;
int n=100;
char c ='A';
pn=&n;
pc=&c;



printf("O valor da variável c contida no ponteiro *pc é %d, ou seja, a letra %c\n",*pc,*pc);
printf("O endereço da váriavel c é %p\n\n",pc);

printf("O valor da váriavel n contida no ponteiro *pn é %d\n",*pn);
printf("O endereço da váriavel n é %p\n\n",pn);

system("PAUSE");


    return 0;
}
