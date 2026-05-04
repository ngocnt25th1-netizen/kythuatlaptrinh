#include <iostream>
#include "Vehicle.h"
#include "LinkedList.h"
#include <string>

using namespace std;


int main()
{
	LinkedList<Vehicle> vehicle = { NULL };
	do {
		system("cls");
		cout << "------ Vehicle MANAGEMENT -------" << endl;
		cout << "1. Show all vehicle" << endl;
		cout << "2. Add a vehicle" << endl;
		cout << "3. Find vehicle" << endl;
		cout << "4. Remove a vehicle" << endl;
		cout << "5. Export to file" << endl;
		cout << "6. Import from file" << endl;
		cout << "7. Update a vehicle" << endl;
		cout << "8. Vehicle statistics by brand" << endl;
		cout << "0. Exit" << endl;
		cout << "----------------" << endl;
		cout << "Enter your choice: " << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			vehicle.Show();
			break;
		}
		case 2: {
			Vehicle a;
			cin >> a;
			vehicle.Add(a);
			break;
		}
		case 3: {
			string key;
			cout << "Enter vehicle ID or brand: ";
			cin >> key;
			vehicle.Find(key);
			break;
		}

		case 4: {
			int removeId;
			cout << "Enter vehicle Id to remove: ";
			cin >> removeId;
			bool res = vehicle.Remove(removeId);
			if (res)
				cout << "Removed vehicle with id: " << removeId << endl;
			else
				cout << "Not found vehicle id: " << removeId << endl;
			break;
		}
		case 5: {
			vehicle.Export("25TH1.dla: ");
			cout << "Exported successfully" << endl;
			break;
		}

		case 6: {
			vehicle.Import("25TH1.dla: ");
			cout << "Imported successfully" << endl;
			break;
		}
  
        case 7: {
			int updateId;
			cout << "Enter vehicle Id to update: ";
			cin >> updateId;
			bool res = vehicle.Update(updateId);
			if (res)
				cout << "Update vehicle successfully " << updateId << endl;
			else
				cout << "Not found vehicle id: " << updateId << endl;

			break;
		}
		case 9: {
			string userName;
			cout << "Enter vehicle name: ";
			cin.ignore();
			getline(cin, userName);
			vehicle.Find(userName);
			break;
		}
		
		case 8: {
			vehicle.Statistics();
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

