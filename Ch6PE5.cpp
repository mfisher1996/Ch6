#include <iostream>
using namespace std;
// rSum(const int[], int, int)
// returns int at first index plus int returned from itself while two ints passed arent =

int rSum(const int[], int, int);


int main(){
	int list[5] = {1,2,3,4,5};
	cout << "The current list holds: ";
	for(int i=0;i<5;i++)
		cout << list[i] << " ";
	cout << "\nThe sum of this list is: " << rSum(list, 0, 4) << endl;
	return 0;
}

int rSum(const int list[], int a, int b){

    if(a==b)

        return list[a];

    else{

        return list[a] + rSum(list, a+1, b);

    }

}
