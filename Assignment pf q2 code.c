#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the coordinate value: ");
	scanf("%d %d", &x,&y);
	if(x>0&&y>0)
	printf("The point (%d, %d) lies in quadrant I", x,y);
	else if(x<0&&y>0)
	printf("The point (%d,%d) lies in quadrant II", x,y);
	else if(x<0&&y<0)
	printf("The point (%d,%d) lies in quadrant III", x,y);
	else if(x>0&&y<0)
	printf("The point (%d,%d) lies in quadrant IV", x,y);
	else if(x==0&&y!=0)
	printf("The point (%d,%d) lies on y axis", x,y);
	else if(y==0&&x!=0)
	printf("The point (%d,%d) lies on x axis", x,y);
	else 
	printf("The point (%d,%d) lies at origin", x,y);
	return 0;
	
}
