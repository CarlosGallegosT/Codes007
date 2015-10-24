#include <iostream>
using namespace std;

long GCD(long x, long y){
long C= x%y;
while (C != 0){
x = y;
y = C;
C= x%y;
}
return y;
}

int main(){
  long A;
  long B;
  long G;
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
