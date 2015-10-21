#include <iostream>
using namespace std;
bool Repeat = 1;
int n;
char Do;

long long FactCal(int x){
  long long R= 1;
  for (int y=x; y>=1; y--){
    R= R*y;
  }
return R;
}

int main(){
std::cout << "This is a Factorial Calculator.";
do {
  std::cout << "Please enter a positive integer: ";
  std::cin >> n;
  std::cout << "The Factorial of the input is: " << FactCal(n) << std::endl;
  std::cout << "Would you like to enter another value? (y/n) ";
  std::cin >> Do;
  if (Do == 'n'){
    Repeat = 0;
  }
} while(Repeat);
std::cout << "Have a nice day!";
return 0;
}
