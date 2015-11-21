#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int checkBanana(string F){
string Text;
int Bananas=0;
int location= 0;
ifstream File(F);

if (File.is_open()==1){
    cout << "The file was opened"<<endl;
    while(getline(File, Text));
File.close();
for (int a=0;a<Text.length();a++){
    if(isupper(Text[a])) Text[a]=tolower(Text[a]);
}
while (Text.find("banana", location)!=-1){
    Bananas++;
    location= Text.find("banana",location)+1;
}
return Bananas;
}

else cout << "The file could not be opened";
return 0;
}

int main(){
string Filename;
cout << "Enter the name of a file: ";
getline(cin, Filename);
cout << "The number of bananas in the file was: " << checkBanana(Filename) << endl;
}
