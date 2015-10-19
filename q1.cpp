#include <iostream>
#include <vector>
using namespace std;

long long sumsquares_list(vector<int> l){
  if (l.size()==0){
    return 0;
  }
  else {
    long long Square= 0;
    int s= l.size();
    for (int b=0; b<s; b++){
      Square= Square + (l[b]*l[b]);
    }
    return Square;
  }
}

int main(){
int x;
vector <int> list;
std::cout << "Enter a list of integers (-1 will stop the list): ";
std::cin >> x;
while (x!=-1){
list.push_back(x);
std::cin >> x;
}
std::cout << "The sum of squares of the values is: " << sumsquares_list(list) << std::endl;
return 0;
}
