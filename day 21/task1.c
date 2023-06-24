#include<stdio.h>
#include<string.h>

int main(){
	
	char passward[100];
	int length , latter , digit , specialchar ,i ;
	
	printf("ennter passward: ");
	scanf("%s",passward);
	
	length = strlen(passward);
	latter = 0 ;
	digit = 0 ;
	specialchar = 0 ;
	
	if(length<6){
		printf("password is invalid !!!! \n");
	}
	
	for(i = 0 ; i < length ; i++ ){
		if( passward[i] >= 'A' && passward[i] <= 'Z' || passward[i] >= 'a' && passward[i] <= 'z' ){
			latter = 1 ;
		}
	    else if( passward[i] >= '0' && passward[i] <= '9' ){
			digit = 1 ;
		}
		else {
			specialchar = 1 ;
		}
	}
	
	if( latter && digit && specialchar ){
		printf("passward is valid.");
	}
	else {
		printf("password is invalid !!!! \n");
	}
	
	return 0;
}