
template <typename T>
struct Node {
	T data;
	Node* next;
};
template <typename T>
struct LinkedList {
	Node<T>* head;
	void show();
	void Add(T item);
};
template <typename T>
void LinkedList<T>::show() {
	if (head == NULL) {
		cout << "No book available" << endl;
		return;
	}
	Node* item = head;
	while (item != NULL) {
		cout << item->data;
		item = item->next;
	}
	friend istream& operator>>(istream & in, Book & b) {
		cout << "Book information: " << endl;
		cout << "\t+ Id: ";
		in >> b.id;
		cout << "\t+ Name:";
		in.ignore();
		getline(in, b.name);
		in >> b.author;
		return in;
}