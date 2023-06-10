#include<stdio.h>

int main (){
	int i = 1;
	int n,sum=1;
	printf("enter value:");
	scanf("%d",&n);
	while(i<=n){
	  sum=sum*i;
		
		i++;
	
	}
printf("sum:%d",sum,n);
	
	return 0;
}
