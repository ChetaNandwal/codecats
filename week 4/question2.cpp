#include<stdio.h>
main()
{
	int arr[] = {1,3,2,4,4,4,4,2,1};
	
	int l = sizeof(arr)/sizeof(arr[0]);
	
	int a[l],i,j;
	int visited = -1;
	
	for(i=0;i<l;i++)
	{
		 int count =1;
		 for(j=i+1;j<l;j++)
		 {
		 	  if(arr[i]==arr[j])
		 	  {
		 	  	count ++;
		 	  	
		 	  	a[j]=visited;
			   }
		 }
		 
		 if(a[i]!=visited)
		   { a[i] = count;
		   }
	}
	
	for(i=0;i<l;i++)
	{
		 if(a[i]!=visited)
		 {
		 	 printf(" %d   ",arr[i]);
		 	 printf("%d  \n",a[i]);
		 }	
	
	}
	
	
}