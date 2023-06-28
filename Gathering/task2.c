#include<stdio.h>

sum(int ar[],int n){
	int c=0,i;
	
for(i=0;i<n;i++){
	c+=ar[i];
}
printf("sum:%d",c);
}

int main(){
	
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	
	int a[n],i;
	
    for(i=0;i<n;i++){
	printf("enter value [%d]:",i);
	scanf("%d",&a[i]);
    }	
	
	sum(a,n);
	return 0;
}
