#include<stdio.h>

void sum(int a , int b){

	printf("sum : %d\n\n",a+b);

}
void min(int a , int b){

	printf("sum : %d\n\n",a-b);

}
void mul(int a , int b){

	printf("sum : %d\n\n",a*b);

}
void div(int a , int b){

	printf("sum : %d\n\n",a/b);

}

int main(){
	
	int a;
	int b;
	char sign;
	
	while(1){
		
	printf("enter value a:");
	scanf("%d",&a);
	
	printf("enter value b:");
	scanf("%d",&b);
	
	printf("+,-,*,/\n\n");
	
	printf("make your selection");
	scanf(" %c",&sign);
	
	switch(sign){
		case'+':
			sum(a,b);
			break;
		case'-':
			min(a,b);
			break;
		case'*':
			mul(a,b);
			break;
		case'/':
			div(a,b);
			break;
	}
	}
	
	return 0;
}
