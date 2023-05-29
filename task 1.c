#include<stdio.h>
int main (){
	
	int x;
	int ans;
	
	printf("enter of x value:");
	scanf("%d",&x);
	
	int y;
	
	
	printf("enter of  y value:");
	scanf("%d",&y);
	
	ans = (x*x) + (2*x*y) + (y*y);
	
	printf("  %d",ans);
}
