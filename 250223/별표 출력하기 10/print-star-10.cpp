#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) 
            for (int j = 0; j <= i / 2; j++)
                cout << "* ";
        else
            for (int j = 0; j <= n - i / 2 - 1; j++)
                cout << "* ";

        cout << endl;
    }

    cout << endl;
    return 0;
}
// 홀수 행에는 오름차순으로 별들을 출력
// 짝수 행에는 내림차순으로 별들을 출력
