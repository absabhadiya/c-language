#include <stdio.h> 

int main()
{
	int n,i;
   printf("Enter the value of arry:");
   scanf("%d",&n);

   int a[n];
       for ( i = 0; i < n; ++i){
       printf("Enter the value [%d]:",i);
	 
        scanf("%d",&a[i]);

}
    int *b[n];
    
           for ( i = 0; i < n; ++i){
             b[i]=&a[i];
}
   printf("\n");
   
     for ( i = 0; i < n; ++i){
    printf("%d",*b[i]);
}

   return 0;
}
