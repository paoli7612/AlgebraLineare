#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	int a, b;
	cout << "Inserisci la parte reale:";
	cin >> a;
	
	cout << "Inserisci la parte immaginaria:";
	cin >> b;
	
	b = -b;
	for (int y=-10; y<=10; y++){
		for (int x=-10; x<=10; x++)
			if (x == 0) cout << "|";
			else if (y == 0) cout << "-";
			else if (x == a && y == b)
				cout << "O";
			else cout << " ";
		cout << endl;
	}
	
	return 0;
}
