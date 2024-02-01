#include <iostream>
#include <time.h>
using namespace std;

void flip(int& front, int& back) {

	front = 0;
	back = 0;

	for (int i = 0; i < 100; i++) {
		if (rand() % 2) front++;
		else back++;
	}
}

int main() {

	srand(time(NULL));

	int front, back;

	flip(front, back);

	cout << "동전의 앞면: " << front << endl;
	cout << "동전의 뒷면: " << back << endl;

	system("pause");

	return 0;
}
