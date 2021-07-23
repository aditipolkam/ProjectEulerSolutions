#include<iostream>
using namespace std;
int main()
{
	int sumOfSquares = 0, sum = 0;
	for(int i = 0; i <= 100; i++){
		sum = sum + i;
		sumOfSquares = sumOfSquares + i*i;
	}
	int squareOfSum = sum*sum;
	int diff = squareOfSum - sumOfSquares;
	cout<<"The difference is %d"<<diff;
	return 0;
}