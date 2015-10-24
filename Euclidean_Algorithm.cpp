#include <iostream>
using namespace std;

int GCD(int x, int y){
if(x==0 & y==0) return 0;
int C= x%y;
while (C != 0){
x = y;
y = C;
C= x%y;
}
return y;
}

int main(){
  int A;
  int B;
  int G;
  std::cout << "This program will calculate the GDC of 2 integers." << std::endl;
  std::cout << "Please enter the first integer: ";
  std:: cin >> A;
  std::cout << "Please enter the second integer: ";
  std:: cin >> B;
  if (A>=B){
    G= GCD(B,A);
  }
  else {
    G= GCD(A,B);
  }
  std::cout << "The resulting GCD is: " << G << std::endl;
  return 0;
}
