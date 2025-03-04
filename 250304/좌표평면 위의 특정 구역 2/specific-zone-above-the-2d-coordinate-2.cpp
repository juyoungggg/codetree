#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][2];
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int exc = 0;
    int xmin, xmax, ymin, ymax;
    int area, min = 1600000000;
    for (int i = 0; i < n; i++) {
        exc = i;
        xmin = ymin = 40000;
        xmax = ymax = 0;
        for (int j = 0; j < n; j++) {
            if (exc == j)
                continue;
            xmin = xmin > arr[j][0] ? arr[j][0] : xmin;
            xmax = xmax < arr[j][0] ? arr[j][0] : xmax;
            ymin = ymin > arr[j][1] ? arr[j][1] : ymin;
            ymax = ymax < arr[j][1] ? arr[j][1] : ymax;
        }
        area = (xmax - xmin) * (ymax - ymin);
        min = area < min ? area : min;
        
        exc++;
    }

    cout << min << endl;
    return 0;
}