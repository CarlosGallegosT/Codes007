#include <iostream>
#include <iomanip>
using namespace std;
int repetition=1;

float CalculateE(float A){
if (A >= 1) return 2;
float Difference=1, eValue=0, Factorial;
while  (Difference > A){
Factorial = 1;
for (int a=1; a<repetition;a++){
    Factorial= Factorial*a;
}
eValue= eValue + 1/Factorial;
Difference= 1/Factorial;
repetition++;
}
return eValue;
}

int main(){
float Accuracy;
cout << "Enter the accuracy for the calculation of e: ";
cin >> Accuracy;
cout << "The result would be: " << setprecision(repetition)<< CalculateE(Accuracy);
return 0;
}
