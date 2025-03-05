#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string nam;
        int sen;
    public:
        Person(string n, int a) : nam(n), sen(a){}
        string GetName() {
            return nam;
        }
        int Getage() {
            return sen;
        }
};
int main(){
    Person p("reza", 33);
    string n = p.GetName();
    int a = p.Getage();
    cout << "nam: " << n << std::endl;
    cout << "sen: " << a << std::endl;
    return 0;
}
