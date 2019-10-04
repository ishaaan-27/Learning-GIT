//continue statement
#include<stdio.h>
main() {
int i=1,num1;
printf("Enter the number");
scanf("%d", &num1);
while(i<=num1)
{
 if(i==2)
 {
  i++;
  continue;
 }
 printf("%d\n",i);
 i++;
}
}
