#include <stdio.h>
int main()
{
int value;
 printf("Please enter a value in the range 1...5:");
scanf("%d",&value);
if (value == 1)
{
printf("You entered monday");
}
else if (value == 2)
{
printf("You entered Tuesday");
}
else if (value == 3)
{
printf("You entered Wednesday");
}
else if (value == 4)
{
printf("You entered Thursday");
}
else if (value == 5)
{
printf("You entered Friday");
}
else
{
printf("You entered a value out of range\n");
}
return 0;
}
