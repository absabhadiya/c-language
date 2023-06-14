#include<stdio.h>

int main(){
	
	char r,c,k;
	for(r='a' ; r<='e'; r++){
   	for(k=r;k<='d';k++){
			printf(" ");
		}
		for(c='a' ; c<=r ; c++){
			printf("%c",c);
		}
		printf("\n");
	}
	
	return 0;
}
