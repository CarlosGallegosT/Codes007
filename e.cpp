#include <iostream>
#include <iomanip>
using namespace std;

float calculate_e(int precision){
if (precision== 0) return 2;
float D= 1, e= 1, Dif=1, F;
int a=1, b;
while (precision > 0){
    D=D *0.1;
    precision--;
}
while(Dif > D){
    F=1;
    b=a;
    while (b>1){
    F= F*b;
    b--;
    }
    e= e + 1.0/F;
    Dif= 1.0/F;
    a++;
}
return e;
}

int main(){
int precision;
int a;
cout << "Enter the number of decimals for the value of e: ";
cin >>  precision;
a= precision+1;
cout << setprecision(a) << calculate_e(precision);
return 0;
}
