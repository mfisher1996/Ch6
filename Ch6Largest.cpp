#include <iostream>
#include "validation.h"
// largestAr(int const [], int, int)
// takes the array and two integers and compared the int at the first index in the array to what is
// returned by the funcion. first checks if the two int are == and if so returns int at that index.

int largestAr(const int [], int, int);

int main(){
	int list[5] ={18, 44, 3, 12, 25}
	cout << "The array currently holds: ";
	for(int i=0;i<5;i++)
		cout << list[i] << " ";
	cout << "The largest value in the array is " << largestAr(list,0,4) << endl;
}

int largestAr(const int list[], int a, int b){

    int max = 0;

    if(a==b) // indexes are equal

        return list[a];

    else{

        max = largestAr(list, a+1, b);

        if(max > list[a])

            return max;

        else

            return list[a];

           

    }

    

}
