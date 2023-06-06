#include<stdio.h>

int main (){
	
	  int a;
	  
	  printf("1. enternational class\n"); 
	  printf("2. national class\n\n"); 
	  
	  printf("enter your class :"); 
	  scanf("%d",&a);
	  
	  switch(a){
	  	case 1:
	  		printf("\n\n this fliat is not avilbel");
	  		break;
	  	case 2:
	  		printf("\n\n1. first class "); 
	  		printf("\n\n2. second class\n "); 
	  	printf("1.goa\n");
	  	printf("2.mumbai\n");
	
	  		
	  			printf("\n\n1.10,000 for first class");
	  			  			
	  			printf("\n\n2.5,000 for second class");	
				 
	  			
	  	printf("\n\n enter number:");
		  scanf("%d",&a);
		  
		  switch(a){
		  	
		  	case 1:
		  		printf("\n\n1.your booking is successfull");	 
		  	break;
		  	
		  	case 2:
		  		printf("\n\n2.your booking is successfull");
		  		break;
		  	default:
		  		printf("invalid! number");
		  			break;
		  
		  }
	  	
	  	break;
	  		default:
		  			printf("invalid! number");
		  			break;
	  	
	  }
	return 0;
}
