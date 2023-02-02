// Task 3 // 
#include "Header.h"
int main() {
	Circle c(10.0);
	Square s(5.0);
	Sphere sp(10.0);
	Cube cu(5.0);

	Shape* shapes[2] = { &c, &s };
	
	// For Two-dimensional Functions
	cout << "******** Two-dimensional Functions ********" << endl;
	cout << endl;

	for (int i = 0; i < 2; i++) {
		cout << shapes[i]->getName() << " area: " << shapes[i]->getArea() << endl;
		cout << endl;
	}
	
	Shape* sh[2] = { &sp, &cu };
	// For Three-dimensional Functions

	cout << "******** Three-dimensional Functions ********" << endl;
	cout << endl;
	for (int i = 0; i < 2; i++) 
	{
		cout << sh[i]->getName() << " volume: " << sh[i]->getVolume() << endl;
		cout << endl;
	}


	system("pause");
	return 0;
}