#include<stdio.h>
main()
{
	int q,w,e,r;
	printf("Enter a three digit number to check if it is palindrome or not\n");
	scanf("%d",&q);
	w=q%10;
	e=q/10;
	r=e/10;
	if(w=r)
		{printf("Number is Palindrome");
		}
	else
		{printf("Number isn''t Palindrome");
		}
		printf("%d %d %d",w,e,r);
}

