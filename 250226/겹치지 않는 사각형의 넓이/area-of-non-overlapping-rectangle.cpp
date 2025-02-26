#include <iostream>
using namespace std;
#define OFFSET 1000

int main() {
    int a_x1, a_y1, a_x2, a_y2; // rectangle A
    int b_x1, b_y1, b_x2, b_y2; // rectangle B
    int m_x1, m_y1, m_x2, m_y2; // rectangle M

    cin >> a_x1 >> a_y1 >> a_x2 >> a_y2;
    cin >> b_x1 >> b_y1 >> b_x2 >> b_y2;
    cin >> m_x1 >> m_y1 >> m_x2 >> m_y2;

    int a_area, b_area;
    a_area = (a_x2 - a_x1) * (a_y2 - a_y1);
    b_area = (b_x2 - b_x1) * (b_y2 - b_y1);

    int arr[1000 + OFFSET + 1][1000 + OFFSET + 1] = {0, };
    for (int i = a_x1 + OFFSET; i < a_x2 + OFFSET; i++)
        for (int j = a_y1 + OFFSET; j < a_y2 + OFFSET; j++)
            arr[i][j] = 1;

    for (int i = b_x1 + OFFSET; i < b_x2 + OFFSET; i++)
        for (int j = b_y1 + OFFSET; j < b_y2 + OFFSET; j++)
            arr[i][j] = 1;
    
    int cnt = 0;
    for (int i = m_x1 + OFFSET; i < m_x2 + OFFSET; i++)
        for (int j = m_y1 + OFFSET; j < m_y2 + OFFSET; j++)
            if (arr[i][j] == 1)
                cnt++;

    cout << a_area + b_area - cnt << endl;

    return 0;
}

/*
1. A, B 각각 넓이를 구한다
2. A와 M, B와 M이 겹치는 넓이를 각각 구한다
    - A, B는 2차원 배열에서 1로 표기
    - M 범위 내에 1로 표기된 부분을 cnt로 세기
3. 1번 값에서 2번 값을 뺀다
*/