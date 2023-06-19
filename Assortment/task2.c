#include<stdio.h>

int main(){
	 
	 int i,n,largest1,largest2;
	 printf("enter size of array:");
	 scanf("%d",&n);
	 
	 int a[n];
	 for(i=0;i<n;i++){
	 	 printf("enter value[%d]:",i);
	 	scanf("%d",&a[i]);
	 }
	 	 for(i=0;i<n;i++){
	 	 	if(a[i]<0){
			  
	 	 printf("%d\t",a[i]);
	 }
	 }
	    largest1 = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > largest1) {
            largest1 = a[i];
        }
    }
    largest2 = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > largest2 && a[i] < largest1)
            largest2 = a[i];
    }
    printf("First and second largest number is %d and %d ", largest1, largest2);
	
	
	return 0;
}
