#include <iostream>
#include <string>
using namespace std;

string Rev(string m){
  int i= m.length()-1;
  string s= "";
  for (i; i>=0;i--){
    s= s+ m[i];
  }
  return s;
}

string isPalindrome (string c, string s){
  if(s==c){
    return "true";
  }
  else {
    return "false";
  }
}


int main(){
string x;
std::cout << "Please enter a phrase: ";
getline(cin, x);
std::cout << isPalindrome(x, Rev(x));
return 0;
}
