#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int height, weight;
    Person();
    Person(string name, int height, int weight);
};

Person::Person() {}

Person::Person(string name, int height, int weight) {
    this->name = name;
    this->height = height;
    this->weight = weight;
}

bool compare(Person a, Person b) {
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;

    Person person[n];
    string name;
    int height, weight;
    for (int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        person[i] = Person(name, height, weight);
    }
    
    sort(person, person + n, compare);
    for (int i = 0; i < n; i++)
        cout << person[i].name << ' ' << person[i].height << ' ' << person[i].weight << endl;
    return 0;
}