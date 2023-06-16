
    	 
#include<stdio.h>

int main(){
	 
	 int n,m;
	 printf("enter size of row:");
	 scanf("%d",&m);
 	 printf("enter size of colum:");
	 scanf("%d",&n);
	 int i,j;
	 int a[m][n];
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
		 
	 	 printf("enter value[%d][%d]:",i,j);
	 	scanf("%d",&a[i][j]);
	 	
	 }
}
    	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
		 
	 	 printf("%d:",i,j);
	 
	 	
	 }
	 printf("\n"); 
}
    
    int sum=0, average;
    
    for( i=0;i<n;i++){
    	for( j=0;i<n;j++){
    	
        sum += a[i][j];
    }
}
    average = sum/m*n;
    printf("The average of given numbers : %d", average);

    return 0;
}
