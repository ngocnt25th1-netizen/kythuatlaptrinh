#include <string>
#include <iostream>
using namespace std;




struct Vehicle {
	int id;
	char type[30], brand[30], price[30];
	

	friend ostream& operator<<(ostream& os, const Vehicle& b) {
		os << "Vehicle information: " << endl;
		os << "\t+ Id: " << b.id << endl;
		os << "\t+ Type: " << b.type << endl;
		os << "\t+ Brand: " << b.brand << endl;
		os << "\t+ Price: " << b.price << endl;
		return os;
	}

	friend istream& operator>>(istream& in, Vehicle& b) {
		cout << "Vehicle information:" << endl;
		cout << "\t+ Id: ";
		in >> b.id;
		cout << "\t+ Type: ";
		in.ignore();
		in.getline(b.type, 30);
		cout << "\t+ Brand: ";
		in.getline(b.brand, 30);
		cout << "\t+ price: ";
		in.getline(b.price, 30);
		return in;
	}
};
