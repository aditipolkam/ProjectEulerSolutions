#include<stdio.h>
int isPrime(int num){
    for(int i=2; i<=num/2; i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    int cnt = 0, num = 2, prime = 2;
    while(cnt!=10001){
        if(isPrime(num)){
            prime = num;
            cnt++;
        }
        num++;    
    }
    printf("%d is the 10001st prime number.",prime);
}