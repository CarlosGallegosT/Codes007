#include <iostream>
using namespace std;

long fibonacci(long n){
  if (n == 0){
    return 0;
  }
  if (n==1){
    return 1;
  }
  else {
    long Sum;
    long x=0;
    long y=1;
    for (int c=0; c<n-1; c++){
      Sum=x+y;
      x=y;
      y=Sum;
    }
  return Sum;
  }
}

int main(){
  long n;
  std::cout << "Please enter an integer: ";
  std::cin >> n;
  std::cout <<   fibonacci(n) << std::endl;
  return 0;
}
