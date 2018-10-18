#include <iostream>
using namespace std;

// rPrint (string, int)
// prints out the passed string in reverse. 
void rPrintStr(string str, int len=0);

int main(){
	string str;
	cout << "Input a string to be printed in reverse.\n";
	cin >> str;
	cout << str << " printed in reverse is: ";
	rPrintStr(str);	
	cout << endl;
	return 0;
}

void rPrintStr(string str, int len){

    if(len+1 == str.size())

        cout << str[len];

    else{

        rPrintStr(str, len+1);

        cout << str[len];

    }

}
