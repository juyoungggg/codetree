#include <iostream>
using namespace std;

int arr[4][4] = {};

void Left() {
    for (int i = 0; i < 4; i++) {
        int tmp_size = 0;
        int tmp[4] = {};
        for (int j = 0; j < 4; j++)
            if (arr[i][j] != 0)
                tmp[tmp_size++] = arr[i][j]; 

        for (int j = 1; j < tmp_size; j++) {
            if (tmp[j - 1] == tmp[j]) {
                tmp[j - 1] *= 2;
                for (int k = j; k < tmp_size - 1; k++)
                    tmp[k] = tmp[k + 1];
                tmp[tmp_size - 1] = 0;
            }
        }

        for (int j = 0; j < tmp_size; j++)
            arr[i][j] = tmp[j];
        for (int j = tmp_size; j < 4; j++)
            arr[i][j] = 0;
    }
}

void Right() {
    for (int i = 0; i < 4; i++) {
        int tmp_size = 0;
        int tmp[4] = {};
        for (int j = 3; j >= 0; j--)
            if (arr[i][j] != 0)
                tmp[tmp_size++] = arr[i][j];
        
        for (int j = 1; j < tmp_size; j++) {
            if (tmp[j - 1] == tmp[j]) {
                tmp[j - 1] *= 2;
                for (int k = j; k < tmp_size - 1; k++)
                    tmp[k] = tmp[k + 1];
                tmp[tmp_size - 1] = 0;
            }
        }

        for (int j = 0; j < tmp_size; j++)
            arr[i][3 - j] = tmp[j];
        for (int j = tmp_size; j < 4; j++)
            arr[i][3 - j] = 0;
    }
}

void Up() {
    for (int j = 0; j < 4; j++) {
        int tmp_size = 0;
        int tmp[4] = {};
        for (int i = 0; i < 4; i++)
            if (arr[i][j] != 0) 
                tmp[tmp_size++] = arr[i][j];
        
        for (int i = 1; i < tmp_size; i++) {
            if (tmp[i - 1] == tmp[i]) {
                tmp[i - 1] *= 2;
                for (int k = i; k < tmp_size - 1; k++)
                    tmp[k] = tmp[k + 1];
                tmp[tmp_size - 1] = 0;   
            }
        }

        for (int i = 0; i < tmp_size; i++)
            arr[i][j] = tmp[i];
        for (int i = tmp_size; i < 4; i++)
            arr[i][j] = 0;
    }
}

void Down() {
    for (int j = 0; j < 4; j++) {
        int tmp_size = 0;
        int tmp[4] = {};
        for (int i = 3; i >= 0; i--)
            if (arr[i][j] != 0)
                tmp[tmp_size++] = arr[i][j];
        
        for (int i = 1; i < tmp_size; i++) {
            if (tmp[i - 1] == tmp[i]) {
                tmp[i - 1] *= 2;
                for (int k = i; k < tmp_size - 1; k++)
                    tmp[k] = tmp[k + 1];
                tmp[tmp_size - 1] = 0;
            }
        }

        for (int i = 0; i < tmp_size; i++)
            arr[3 - i][j] = tmp[i];
        for (int i = tmp_size; i < 4; i++)
            arr[3 - i][j] = tmp[i];
    }
}

int main() {    
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];
    
    char dir;
    cin >> dir;

    if (dir == 'L') 
        Left();
    else if (dir == 'R')
        Right();
    else if (dir == 'U')
        Up();
    else if (dir == 'D')
        Down();

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}