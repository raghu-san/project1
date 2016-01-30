#include<stdio.h>

//header file contains reverse_string declaration
#include "myheader.h"

int main()
{

	char res;

	//Test Case 1
	res = reverse_string(NULL,0);
	if(1 == res)
	{
		printf("\nTest Case 1 SUCCESS");
	}
	else
	{
		printf("\nTest Case 1 FAIL");
	}

	//Test Case 2
	char p[] = "Hello";
	res = reverse_string(p,5);
	if(0 == res)
	{
		printf("\nTest Case 2 SUCCESS, Original String : %s, Reversed String : %s","Hello",p);
	}
	else
	{
		printf("\nTest Case 2 FAIL");
	}

	//Test Case 3
	char a[] = {'a','b','c'};
	res = reverse_string(a,3);
	if(0 == res)
	{
		printf("\nTest Case 3 SUCCESS, Original String : %s, Reversed String : %c%c%c","abc",a[0],a[1],a[2]);
	}
	else
	{
		printf("\nTest Case 3 FAIL");
	}

	//Test Case 4

	char b[] = "MALAYALAM";
	res = reverse_string(b,9);
	if(0 == res)
	{
		printf("\nTest Case 4 SUCCESS, Original String : %s, Reversed String : %s","MALAYALAM",b);
	}
	else
	{
		printf("\nTest Case 4 FAIL");
	}

	printf("\n");

	return 0;

}
