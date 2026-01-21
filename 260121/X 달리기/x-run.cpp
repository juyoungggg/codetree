#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int time, vel, dis;
    time = 0;
    vel = 0;
    dis = 0;

    while (dis <= x / 2) {
        time++;
        vel++;
        dis += vel;
    }

    while (dis < x) {
        time++;
        if (vel > 1)
            vel--;
        dis += vel;
    }

    cout << time << endl;
    
    return 0;
}