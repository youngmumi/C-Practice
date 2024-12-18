#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main() {
    const int startingMoney = 50;
    const int targetMoney = 250;
    const int numSimulations = 1000;  

    cout << "�ʱ� �ݾ� $50\n��ǥ �ݾ� $250\n" << endl;

    srand(NULL);  

    int successCount = 0;

    for (int i = 0; i < numSimulations; i++) {
        int cash = startingMoney;

        while (cash > 0 && cash < targetMoney) 
            if ((double)rand() / RAND_MAX < 0.5) {
                cash++;  
            }
            else {
                cash--;  
            }
        }

        if (cash == targetMoney) {
            successCount++;
        }
    }

    float successProbability = static_cast<double>(successCount) / numSimulations;

    cout << "��ǥ �ݾ� " << targetMoney << "�� �����ϴ� Ȯ��: " << successProbability * 100 << "%" << endl;

    system("pause");

    return 0;
}
