#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main() {
    const int startingMoney = 50;
    const int targetMoney = 250;
    const int numSimulations = 1000;  

    cout << "\n" << endl;

    srand(time(0));  // 난수 초기화

    int successCount = 0;

    for (int i = 0; i < numSimulations; i++) {
        int cash = startingMoney;

        while (cash > 0 && cash < targetMoney) {
            if ((double)rand() / RAND_MAX < 0.5) {
                cash++;  // 승리 시 현금 증가
            } else {
                cash--;  // 패배 시 현금 감소
            }
        }

        if (cash == targetMoney) {
            successCount++;
        }
    }

    float successProbability = static_cast<float>(successCount) / numSimulations;

    cout << "성공률: " << successProbability * 100 << "%" << endl;

    system("pause");

    return 0;
}

