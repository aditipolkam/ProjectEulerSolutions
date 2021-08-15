#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int sum=0, c;
    for(int a=1;a<1000;a++){
        for(int b=1; b<1000; b++){
            c = 1000-a-b;
            if((a*a)+(b*b)==(c*c)){
                cout<<a*b*c;
                return 0;
            }
        }
    }
    return 0;
}
