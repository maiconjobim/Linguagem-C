#include <stdio.h>
 double fatorial(int n )
{
	if(n==0)
		return 1;
	else
		return n*fatorial(n-1);
	
}
double somatorio(int n1,int n2 )
{
	if(fatorial(n1) > fatorial(n2))
		return 0;
	else
	{		
			
		return fatorial(n1) + somatorio(n1+1,n2);
	}
}



void main  ()
{
	int n1,n2 ;
	
	while(scanf("%d %d",&n1,&n2))
		printf("%d a %d = %3.0f\n",n1,n2 ,somatorio(n1,n2));
		
}
