#include<stdio.h>

int main (){
	int i = 1;
	int n,sum=1;
	printf("enter value:");
	scanf("%d",&n);
	
	do{
		  sum=sum*i;
		
		i++;
	}
	while(i<=n);
	
	
	
printf("sum:%d",sum,n);
	
	return 0;
}
