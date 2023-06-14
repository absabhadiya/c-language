#include<stdio.h>

int main(){
	
	int r,c;
	int a=4,b=4;
	for(r=1; r<=5 ; r++){

		for(c=1 ; c<=7; c++){
			if(c==a||c==b){
					printf("*");
			}
			else{
					printf(" ");
			}
		
		}
		a--;
		b++;
	
		printf("\n");
	}
	
	
	return 0;
}
