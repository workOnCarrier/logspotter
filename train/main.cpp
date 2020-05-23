

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
	list<int>  int_list;
	int_list.insert(begin(int_list), 2);
	int_list.insert(begin(int_list), 4);
	int_list.insert(begin(int_list), 6);
	int_list.insert(begin(int_list), 8);

	for( auto e: int_list){
		cout << e << ", ";
	}
	cout << endl;
}
