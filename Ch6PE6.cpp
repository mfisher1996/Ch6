#include <iostream>
using namespace std;

// palin(string, int, int)
// returns true if str[first int] == str[second int] only if !(first int >= second int)

bool palin(string str, int, int);



int main(){
	string test;
	cout << "Input some string to see if it's a palindrome.\n";
	cin >> test;
	if(palin(test, 0, test.size()-1))
		cout << test << " is a palindrome.\n";
	else
		cout << test << " is not a palindrome.\n";

	return 0;
}

bool palin(string str, int a, int len){

    if(a>=len)

        return true;

    else{

        if(str[a] == str[len])

            return palin(str, a+1, len-1);

        else

            return false;

        

    }

}
