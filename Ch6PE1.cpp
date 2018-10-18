#include <iostream>
using namespace std;
// recursiveA(int)
// prints to stdout int number of *, calls recursiveA(int-1), then prints int number of * again, unless
// int ==0.

void recursiveAr(int a);

int main(){
	int num;
	cout << "Input a positive integer.\n";
	cin >> num;
	while(num<=0){
		cout << "Please inpt a number greater than 0.\n";
		cin >> num;
	}
	recursiveAr(num);
	
	return 0;
}


void recursiveAr(int a){

    if(a==1){

        cout << "*" << endl;

        return;

    }else{

        for(int i=0; i<a;i++)

            cout << "*";

        cout << endl;

        recursiveAr(a-1);




    }

    if(a==1){

        cout << "*" << endl;

    }else{

        for(int i=0; i<a;i++)

            cout << "*";

        cout << endl;

    }

    

}
