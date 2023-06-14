#include<stdio.h>

int main(){
	
	char r,c;
	for(r='a' ; r<='e'; r++){
		for(c='a' ; c<=r ; c++){
			printf("%c",r);
		}
		printf("\n");
	}
	
	return 0;
}
