#include<stdio.h>
#include<math.h>
void main()
{
	int k = 20, i = 0, check = 0, n = 1;
	int limit = sqrt(k);
	int p[] = {2,3,5,7,11,13,17,19,23};
	int a[k];
		
	while(p[i] <= k)
	{
		a[i] = 1;
		if(check == 0)
		{
			if(p[i] <= limit)
				a[i] = log(k)/log(p[i]);
			else
				check = 1; 
		}
		n *=  pow(p[i],a[i]);
		i = i + 1;
	}
	printf("The smallest number to be divisible by 1 to 20 is %d ",n);
}