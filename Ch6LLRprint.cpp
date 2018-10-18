#include <iostream>
#include "Wk_ch5.hpp"

// rPrint()
// outputs the current node if the next node is null. if the next node is null calls itself then outputs
// current node.



int main(){
	unorderedLinkedList<int> list;
	list.insertLast(5);
	list.insertLast(6);
	list.insertLast(7);
	cout << "The current list holds: ";
	list.print();
	cout << endl;
	cout <<"The list in reverse is: ";
	list.rPrint(list.getFirst());
	cout << endl;
}




