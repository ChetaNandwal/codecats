#include<stdio.h>

main()
{
	int  I,N,Q;
	
	printf("total number of coins :  ");
	scanf("%d",&N);
	
	printf("enter if coins showing head or tail  ");
	scanf("%d",&I);
	
	printf("coins needs to show  total no  of head or tail   :  ");
	scanf("%d",&Q);
	
	if(I==Q)
	{  N = N/2;
	} 
	else 
	{ N = (N+1)/2 ;
	}
	
	printf(" total %d " ,N );
	
}