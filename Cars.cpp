#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
string Filename= "93cars.dat.txt";
string Data, P, H, C;
float City, Highway, Price, AC= 0.0, AH= 0.0, AP= 0.0;
ifstream File(Filename);
if(File.is_open()){
    cout << "The file was opened"<< endl;
    for(int i= 0; i<93; i++){
     getline(File,Data);
     P= Data.substr(42, 4);
     istringstream Convert(P);
     Convert >> Price;
     AP= AP + Price;
     H= Data.substr(55, 2);
     istringstream Convert2(H);
     Convert2 >> Highway;
     AH= AH + Highway;
     C= Data.substr(52, 2);
     istringstream Convert3(C);
     Convert3 >> City;
     AC= AC + City;
     getline(File,Data);
    }
File.close();
AP= AP/93;
AH= AH/93;
AC= AC/93;
cout << "The average gas mileage in city of the cars is: " << AC << endl;
cout << "The average gas mileage on highway of the cars is: " << AH << endl;
cout << "The average midrange price of the cars is: " << AP << endl;
}
else cout << "The file couldn't be opened";
return 0;
}
