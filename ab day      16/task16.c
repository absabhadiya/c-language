#include<stdio.h>

int main(){
	
	char r,c,k;
	for(r='a' ; r<='e' ; r++){
		for(k='a';k<r;k++){
			printf(" ");
		}
		for(c=r; c<='e' ; c++){
			printf("%c",c);
		}
		printf("\n");
	}
	
	return 0;
}
