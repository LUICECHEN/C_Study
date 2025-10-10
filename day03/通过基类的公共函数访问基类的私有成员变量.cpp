#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
public:
    Base() : privateVar(10) {}
    void accessPrivateVar() {
        cout << "Base privateVar: " << privateVar << endl;
    }
};

class Derived : public Base {
public:
    void accessBasePrivateVar() {
        // 通过调用基类的公有成员函数来访问基类的私有成员变量
        accessPrivateVar();
    }
};

int main() {
    Derived d;
    d.accessBasePrivateVar(); // 输出 Base privateVar: 10
    return 0;
}