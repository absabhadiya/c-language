#include<stdio.h>

int main (){
	int i = 1;
	int n,sum=0;
	printf("enter value:");
	scanf("%d",&n);
	
	do{
		 sum=sum+i;
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
	 
	
printf("sum:%d",sum);
	
	return 0;
}
