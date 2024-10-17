#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(static_cast<unsigned int> (time(0)));

	void drunkardlocation(int minutes, int drunkardnumber);

	for (int i = 1; i <= 10; i++) {
		drunkardlocation(2, i);
	}
	
}

void drunkardlocation(int minutes, int drunkardnumber) {

	int x = 0;
	int y = 0;

	for (int i = 1; i <= minutes*60; i++) {
		
		int motion = rand() % 9 + 1;

		switch (motion) {
			//forward
		case 1: x = x, y = y + 1; break;
			//backward
		case 2: x = x, y = y - 1; break;
			//left
		case 3: x = x - 1; y = y; break;
			//right
		case 4: x = x + 1, y = y; break;
			//northeast
		case 5: x = x + 1, y = y + 1; break;
			//northwest
		case 6: x = x - 1, y = y + 1; break;
			//south east
		case 7: x = x + 1, y = y - 1; break;
			//southwest
		case 8: x = x - 1, y = y - 1; break;
			//no movement
		case 9: x = x, y = y; break;
		}
	}

	cout << "Drunkard #" << drunkardnumber << ": finished at location (" << x << "," << y << ")" << endl;
}