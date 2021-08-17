#include<iostream>
using namespace std;
int isPrime(int num){
    for(int i=2; i<=num/2; i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long sum = 2;
    for(long i=3;i<2000000;i=i+2){
        if(isPrime(i))
            sum+=i;
    }
    cout<<sum;
    return 0;
}
