#include "LinkedList.h"
#include <iostream>

using namespace std;
template <typename T>
void LinkedList<T>::show() {
	if (head == NULL) {
		cout << "No book available" << endl;
		return;
	}
	Node* item = head;
	while (item != NULL) {
		//cout << item->data;
		item = item->next;
	}
}


