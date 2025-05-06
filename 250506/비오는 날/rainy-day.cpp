#include <iostream>
#include <string>
using namespace std;

class Data {
public:
    string date;
    string yoil;
    string weather;
    Data();
    Data(string date, string yoil, string weather);
};

Data::Data() {}
Data::Data(string date, string yoil, string weather) {
    this->date = date;
    this->yoil = yoil;
    this->weather = weather;
}

int main() {
    int n;
    cin >> n;

    Data data[n];
    string date, yoil, weather;
    int rainidx = -1;
    for (int i = 0; i < n; i++) {
        cin >> date >> yoil >> weather;
        data[i] = Data(date, yoil, weather);
        if (data[i].weather == "Rain") {
            if (rainidx == -1)
                rainidx = i;
            else {
                if (data[rainidx].date > data[i].date)
                    rainidx = i;
            }
        }
    }

    cout << data[rainidx].date << ' ' << data[rainidx].yoil << ' ' << data[rainidx].weather << endl;
    return 0;
}