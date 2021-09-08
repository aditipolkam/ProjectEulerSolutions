#include<iostream>
using namespace std;

int main()
{
    const unsigned int size = 20;
    unsigned int matrix[size][size];
    cout<<"Enter the matrix filling the rows first.";
    for(int y=0; y<size; y++)
        for(int x=0; x<size; x++)
            cin>>matrix[x][y];
    
    unsigned int product = 0;
    for(int y=0; y<size; y++){
        for(int x=0; x<size; x++){
            if(x+3 < size){
                unsigned int current = matrix[x][y] * matrix[x+1][y] * matrix[x+2][y] * matrix[x+3][y];
                if(current>product)
                    product = current;
            }
            if(y+3 < size){
                unsigned current = matrix[x][y] * matrix[x][y+1] * matrix[x][y+2] * matrix[x][y+3];
                if(current>product)
                    product = current;
            }
            if(x<size && y-3>=0){
                unsigned current = matrix[x][y] * matrix[x+1][y-1] * matrix[x+2][y-2] * matrix[x+3][y-3];
                if(current>product)
                    product = current;
            }
            if(x+3<size && y+3<size){
                unsigned current = matrix[x][y] * matrix[x+1][y+1] * matrix[x+2][y+2] * matrix[x+3][y+3];
                if(current>product)
                    product = current;
            }
        }
        cout<<endl<<product;
    }
        
    return 0;
}
