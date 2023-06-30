#include<stdio.h>  
int main()  
{  
    int n, arr[n], i;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
   
    for(i = 0; i < n; i++)  
    {  
        printf("Enter the elements[%d]: ",i); 
        scanf("%d", &arr[i]);  
    }  
    int *rev[n];  
    printf("The Reversed array: ");  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[i] = &arr[i];  
       printf("%d ", *rev[i]);  
    }  
return 0;
}  

