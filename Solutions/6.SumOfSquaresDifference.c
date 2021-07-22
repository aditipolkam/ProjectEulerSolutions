#include<stdio.h>
void main()
{
	int sumOfSquares = 0, sum = 0;
	for(int i = 0; i <= 100; i++){
		sum = sum + i;
		sumOfSquares = sumOfSquares + i*i;
	}
	int squareOfSum = sum*sum;
	int diff = squareOfSum - sumOfSquares;
	printf("The difference is %d",diff);
}