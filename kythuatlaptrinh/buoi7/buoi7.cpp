

#include <iostream>
#include "account.h"
#include "LinkedList.h"


int main()
{
	LinkedList<Account> books = { NULL };
	do {
		system("cls");
		cout << "------ Account MANAGEMENT -------" << endl;
		cout << "1. Show all account" << endl;
		cout << "2. Add a account" << endl;
		cout << "3. Delete a account" << endl;
		cout << "4. Update a account" << endl;
		cout << "5. Find account" << endl;
		cout << "6. Export to file" << endl;
		cout << "7. Import from file" << endl;
		cout << "0. Exit" << endl;
		cout << "----------------" << endl;
		cout << "Enter your choice: " << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			Accounts.show();
			break;
		}
		case 2: {
			Account a;
			cin >> a
			break;
		}
		case 3: {
			/*int removeId;
			cout << "Enter book's id to remove: ";
			cin >> removeId;
			bool res = books.Remove(removeId);
			if (res)
				cout << "Remove book successfully" << endl;
			else
				cout << "Invalid book id" << endl;*/
			break;
		}
		case 4: {
			/*int updateId;
			cout << "Enter book's id to update: ";
			cin >> updateId;
			bool res = books.Update(updateId);
			if (res)
				cout << "Update book successfully" << endl;
			else
				cout << "Invalid book id " << endl;*/
			break;
		}
		case 5: {
			/*string bookName;
			cout << "Enter book's nameto find: ";
			cin.ignore();
			getline(cin, bookName);
			Book* res = books.Find(bookName);
			if (res != NULL) {
				cout << *res;
			}
			else {
				cout << "No book with name: " << bookName << endl;
			}*/
			break;
		}
		case 6: {
			/*books.Export("25TH1.dla");
			cout << "Export successfully" << endl;*/
			break;
		}
		case 7: {
			/*book.Import("25TH1.dla");
			cout << "Imported successfully" << endl;*/
			break;
		}
		case 0: {
			return 0;
		}
		default: {
			cout << "Invalid choice, try again" << endl;
			break;
		}
		}
			  system("pause");
			  cout << "Press any key to continue.....";



		} while (true);
	}
};

