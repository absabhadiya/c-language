#include <stdio.h>
int main()
{
   int n, i;
 
    printf("Enter a Number ");
    scanf("%d",&n);
    i=1;
    do{
    	   printf("%d * %d = %d \n", n, i, n*i);
        ++i;
	}
    while(i<=10);
                
     
    
     
    return 0;
    
}
