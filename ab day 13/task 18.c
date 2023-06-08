#include<stdio.h>

int main (){
	int i ;
	int n,sum=0;
	printf("enter value:");
	scanf("%d",&n);
	for(i = 1;i<=n;i++){
	  sum=sum+i;
		printf("%d\n",i);
	
	
	}
printf("sum:%d",sum);
	
	return 0;
}
