
#include <iostream>
#include "mylist.h"

using namespace std;
void try_list();

int main (){
    cout << "Hello world!" << endl;
	try_list();
	return 0;
}

void try_list(){
	myList<int>  int_list;
	int_list.insert(2);
	int_list.insert(4);
	int_list.insert(6);
	int_list.insert(8);

	int_list.display();

	cout << endl;
}
