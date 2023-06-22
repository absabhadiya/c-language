#include<stdio.h>
#include<string.h>

int main(){
	
	char a[20];
	char b[20];
	printf("enter value:");
	scanf("%s",a);
	strcpy(b,a);
	strrev(a);
	
	int i=strcmp(a,b);
	if(i==0){
		printf("this value is palindrome value");
	}
	else{
		printf("this value is not palindrome value");
	}
	
	
	return 0;
}
