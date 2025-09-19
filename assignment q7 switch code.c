#include<stdio.h>
int main(){
	int num;
	printf("Enter a number in the range (1-5): ");
	scanf("%d", &num);
	switch(num){
		case 1:
			printf("You entered Monday");
			break;
	    case 2:
	    	printf("You entered Tuesday");
	    	break;
	    case 3:
	    	printf("You entered Wedneday");
	    	break;
	    case 4:
	    	printf("You entered Thursday");
	    	break;
	    case 5:
	    	printf("You entered Friday");
	    	break;
	    default:
	    	printf("You entered a value out of range");
	    	break;
}
}
	

