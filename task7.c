#include<stdio.h>

int main (){
	
	int x;
	int ans;
	int z;
	
	printf("enter of x value:");
	scanf("%d",&x);
	
	int y;
	
	
	printf("enter of  y value:");
	scanf("%d",&y);
	
	printf("enter of  z value:");
	scanf("%d",&z);
	
	
	ans =  (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("%d",ans);
	return 0;
}
