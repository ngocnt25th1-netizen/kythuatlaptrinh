#include <iostream>
#include <vector>

using namespace std;
struct person {
	int id;
	string name;
	int age;
	string address;
};

void ViewPersonList(vector<person> p) {
	if (p.size() == 0)
		cout << "An empty list" << endl;
	else{
		for (int i = 0; i < p.size(); i++) {
			cout << "Person " << (i + 1) << endl;
			cout << "\t+ Id: << p[i].id" << endl;
			cout << "\t+ Name: << p[i].name" << endl;
			cout << "\t+ Age: << p[i].age" << endl;
			cout << "\t+ Address: << p[i].address" << endl;
			
		}
	}
}

int main() {
	vector<person> list;
	do {
		system("cls");
		cout << "--- HUMAN RESOURCE -----" << endl;
		cout << "1. View person list" << endl;
		cout << "2. Add a person" << endl;
		cout << "3. Remove a person" << endl;
		cout << "4. Fing a person by name" << endl;
		cout << "5. Export to file" << endl;
		cout << "6. Import from file" << endl;
		cout << "0. Exit" << endl;
		cout << "------------------------" << endl;
		cout << "Your comand: ";
		int cmd;
		cin >> cmd;
		switch (cmd)
		{
		case 1: {
			ViewPersonList(list);
			break;
		}
		case 2: {
			break;
		}
		case 3: {
			break;
		}
		case 4: {
			break;
		}
		case 5: {
			break;
		}
		case 6: {
			break;
		}
		case 0: {
			return 0;
		}
		default: 
			cout << "Yuor command int't found. Try again..." << endl;
			break;
		}
		cout << "Press Enter to continue...";
		cin.ignore();
		cin.get();
	} while (true);
	return 0;
}