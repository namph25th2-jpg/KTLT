#include <iostream>
#include <vector>

using namespace std;

struct person {
	int id, age;
	string name, hometown;
};


void Show(vector<person> p) {
	if (p.size() == 0)
		cout << "An empty list" << endl;
	else {
		/*for (int i = 0; i < p.size(); i++)*/
		for (int i = p.size() - 1; i >= 0; i--) {
			cout << "Person information" << endl;
			cout << "\t + Id:" << p[i].id << endl;
			cout << "\t + Name:" << p[i].name << endl;
			cout << "\t + Age:" << p[i].age << endl;
			cout << "\t + Home town:" << p[i].hometown << endl;

		}
	}
}

int main() {
	vector <person> list;

	do {
		system("cls");
		cout << "------ HUMAN RESOURCE MANAGEMENT -----" << endl;
		cout << "1. Show person list" << endl;
		cout << "2. Add a person " << endl;
		cout << "3. Remove a person by id" << endl;
		cout << "4. Find a person by name " << endl;
		cout << "5. Export to file " << endl;
		cout << "6. Import form file " << endl;
		cout << "-----------------------------------------" << endl;
		cout << "Your command: " << endl;
		int cmd;
		cin >> cmd;
		switch (cmd) {
		case 1: {
			Show(list);
			break;
		}
		case 2: {
			person a;
			cout << "Id:";
			cin >> a.id;
			cout << "Name:";
			cin >> a.name;
			cout << "Age:";
			cin >> a.age;
			cout << "Home town:";
			cin >> a.hometown;
			list.push_back(a);
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
		default: {
			cout << "Your command isn't found. Try again " << endl;
		}
		}
		cout << "Press Enter to continue.....";
		cin.ignore();
		cin.get();


	} while (true);
}
