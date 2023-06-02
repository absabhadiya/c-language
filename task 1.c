#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("value A: ");
	scanf("%d",&a);
	
	printf("value B: ");
	scanf("%d",&b);
	
	printf("value C: ");
	scanf("%d",&c);

	
if(a<b){
		if(a<c){
					printf("A is min");
			}
		else{
					printf("C is min");
			}	
    	}
	else{
		if(b<c){
					printf("B is min");
				}
		else{
					printf("C is min");
		    }
		}	
	return 0;	
}