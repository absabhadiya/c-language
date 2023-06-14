#include<stdio.h>

int main(){
	
	int r,c,k;
	for(r=5 ; r>=c ; r--){
	for(k=r;k<=4;k++){
			printf(" ");
		}
		for(c=r ; c>=1 ; c--){
			printf("%d",c);
		}
		printf("\n");
	}
	
	return 0;
}
