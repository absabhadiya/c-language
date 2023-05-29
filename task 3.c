#include<stdio.h>

int main (){
	
	int x;
	int ans;
	
	printf("enter of x value:");
	scanf("%d",&x);
	
	int y;
	
	
	printf("enter of  y value:");
	scanf("%d",&y);
	
	ans = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("  %d",ans);
	return 0;
}
