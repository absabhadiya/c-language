#include<stdio.h>
#include<string.h>

void sum(int a){
    
	if( a%3==0 && a%5==0 ){
	  printf("this value is div by 3 & 5 ");	
	}
	else{
	  printf("this value is not div by 3 & 5 ");
	}
}

int main(){
	
	int a;
	
    printf("enter value: ");
    scanf("%d",&a);
    
    sum(a);
	
	return 0;
}