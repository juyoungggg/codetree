#include <iostream>
using namespace std;

class Product {
public:
    string name;
    int code;
    Product();
    Product(string name, int code);
};

Product::Product() {}

Product::Product(string name, int code) {
    this->name = name;
    this->code = code;
}

int main() {
    Product p1("codetree", 50);
    string name;
    int code;
    cin >> name;
    cin >> code;

    Product p2(name, code);

    cout << "product " << p1.code << " is " << p1.name << endl;
    cout << "product " << p2.code << " is " << p2.name << endl;
    return 0;
}