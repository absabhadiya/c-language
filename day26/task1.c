#include<stdio.h>

int main(){
	
	int a;
	int *b;
	printf("enter value :");
	scanf("%d",&a);
	
	b=&a;
	
	printf("%u => %d",b,(*b)*(*b));
	
	return 0;
}
