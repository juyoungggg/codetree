#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Grade {
public:
    string name;
    int kor, eng, math;
    Grade();
    Grade(string name, int kor, int eng, int math);
};

Grade::Grade() {}

Grade::Grade(string name, int kor, int eng, int math) {
    this->name = name;
    this->kor = kor;
    this->eng = eng;
    this->math = math;
}

bool compare(Grade a, Grade b) {
    if (a.kor == b.kor) {
        if (a.eng == b.eng)
            return a.math > b.math;
        return a.eng > b.eng;
    }
    
    return a.kor > b.kor;
}


int main() {
    int n;
    cin >> n;

    Grade grades[n];
    string name;
    int kor, eng, math;
    for (int i = 0; i < n; i++) {
        cin >> name >> kor >> eng >> math;
        grades[i] = Grade(name, kor, eng, math);
    }

    sort(grades, grades + n, compare);
    for (int i = 0; i < n; i++)
        cout << grades[i].name << ' ' << grades[i].kor << ' ' << grades[i].eng << ' ' << grades[i].math << endl;

    return 0;
}