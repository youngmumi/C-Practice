#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
	
	bool board[10][10]= { 0 };
	srand(time(NULL));
	
	for (int i; i<10; i++)
		for (int j; j<10; j++)
			if ((rand() % 100) < 30)
				board[i][j] = true;
				
	for (int i; i<10; i++){
		for (int j; j<10; j++){
				if (board[i][j])
				cout << "# ";
			else 
				cout << ". ";	
		}
		cout << endl;
	}
	
	return 0;
	
}
