#include <iostream>
#include <string>
using namespace std;

int main() {

    int counter[256] = { 0 };
    string s;

    cout << "문자열을 입력하시오: ";
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        counter[static_cast<int>(s[i])]++; // 문자의 ASCII 값으로 인덱스 사용
    }

    for (int i = 0; i < 256; i++) {
        if (counter[i] == 0) continue;
        else if(counter[i] >= 1){
            char ch = static_cast<char>(i); // 인덱스를 문자로 변환
            cout << ch << ": " << counter[i] << endl;
        }
    }

    system("pause");

    return 0;
}
