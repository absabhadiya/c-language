#include <stdio.h>


  

int main(){
	 
	 int n,m;
	 printf("enter size of row:");
	 scanf("%d",&m);
 	 printf("enter size of colum:");
	 scanf("%d",&n);
	 int i,j,h;
	 int a[m][n];
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
		 
	 	 printf("enter value[%d][%d]:",i,j);
	 	scanf("%d",&a[i][j]);
	 	
	 }
}
	 	 for(i=0;i<m;i++){
	 	 	
	 	 for(j=0;j<n;j++){
	 	 printf("%d",a[i][j]);
	 }
	 	 printf("\n");
}
	 	 h=	sizeof(a)/sizeof(a[0][0]);

     	 	 printf("%d size of array: ",h);
	


	
    return 0;
}
