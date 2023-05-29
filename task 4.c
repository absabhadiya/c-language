#include<stdio.h>

int main (){
	
	int x;
	int ans;
	
	printf("enter of x value:");
	scanf("%d",&x);
	
	int y;
	
	
	printf("enter of  y value:");
	scanf("%d",&y);
	
	ans =  (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	printf("%d",ans);
	return 0;
}
