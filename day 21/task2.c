#include<stdio.h>
#include<string.h>

int main(){
	
	char a[]="aryan123@gmail.com";
	char b[]="ab@7710";
	
	char c[100];
	char d[100];
	
	printf("enter Google Account : ");
	scanf("%s",c);
	
	printf("enter Google Account passward : ");
	scanf("%s",d);
	
	int z=strcmp(a,c) && strcmp(b,d);
	
	if( z==0 ){
		printf("this account is valid ");
	}
	else{
		printf("this account is not valid!!! ");
	}
	
	return 0;
}