#include <iostream>
#include <stdlib.h>
using namespace std;

float SquareRoot(long N){
    float x=0.0;
    float y=0.0;
    float z= N;
    while(x*x<=N){
        x= x++;
    }
    x= x--;
    while (abs(x-y) > 0.00001){
        y=z/x;
        x=(x+y)/2.0;
    }
    return x;
}

int main() {
    long Number;
    cout << "Please enter a number to obtain its square root: ";
    cin >> Number;
    cout << "The square root of the Number is: " << SquareRoot(Number)<< endl;
    return 0;
}
