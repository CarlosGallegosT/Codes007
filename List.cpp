#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long StdDev(vector<long> Num, long Av){
long b=0;
for(int a= 0; a<10; a++){
  b= b + ((Num[a]-Av)* (Num[a]-Av));
}
b= b/9;
b= sqrt(b);
return b;
}

int main(){
long Sum;
long Average;
vector<long> Number(10,0);
std::cout << "Please enter 10 values: ";
for(int x= 0; x<10; x++){
std::cin >> Number[x];
}
for(int n=0; n<10; n++){
Sum= Sum + Number[n];
}
Average= Sum/10;
std::cout << "The Total of the values is: " << Sum << std::endl;
std::cout << "The Average of the values is: " << Average << std::endl;
std::cout << "The Standard Deviation of the values is: " << StdDev(Number, Average) << std::endl;
return 0;
}
