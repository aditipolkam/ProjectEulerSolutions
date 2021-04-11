#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long int num = 600851475143, i = 2;
	while(i <= sqrt(num))
	{
		if(num%i == 0)
		{
			while(num%i==0)
        	{
            	num/=i;
        	}           
        	if(num==1)
        	{
            	num=i;
            	break;
        	}
		}
		else
		{
			i++;
		}
	}
	cout<<num;
	return 0;
}
