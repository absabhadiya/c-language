#include<stdio.h>

int main(){
	 
	 int i,n;
	 printf("enter size of array:");
	 scanf("%d",&n);
	 
	 int a[n];
	 for(i=0;i<n;i++){
	 	 printf("enter value[%d]:",i);
	 	scanf("%d",&a[i]);
	 }
	 	 for(i=0;i<n;i++){
	 	 	if(a[i]<0){
			  
	 	 printf("%d\n",a[i]);
	 	 	  
	 	 printf("this negative elements in an array.");
	 }
	 }
	
	
	
	return 0;
}
