#include<stdio.h>

int main(){
	 
	 int n,m,Sum=0;
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
	 	 printf("%d",a[i][j]);
}
}
for(i = 0; i < m; i++)
    {
        
        for(j = 0; j < n; j++)
        {
            Sum = Sum + a[i][j];
        }
        printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum );
    }


	
	return 0;
}
