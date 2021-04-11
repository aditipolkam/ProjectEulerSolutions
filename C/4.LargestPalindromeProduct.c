#include <stdio.h>

int checkPalindrome(int num)
{
	int a = 0,b = num, temp = 0;
	while(num > 0)
	{
		a = num % 10;
		num = num / 10;
		temp = temp * 10 + a;
	}
	if(temp == b)
		return 0;
	else
		return -1;
}
	
void main()
{
	int i,j,product = 0,pal = 0,m1 = 0,m2 = 0;
	for(i=999;i>=100;i--)
	{
		for(j=999;j>=100;j--)
		{
			product = i * j;
			if(checkPalindrome(product) == 0)
			{
				if(product > pal)
				{
					m1 = i;
					m2 = j;
					pal = product;
				}
			}
		}
	}
	printf(" %d is the largest palindrome product of two 3 digit numbers i.e. %d * %d",pal,m1,m2);
} 


