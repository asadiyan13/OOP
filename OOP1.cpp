#include <iostream>  // for input and output
using namespace std;

class BENZ {
public:
    bool Start() {
        bool result = StartEngine() && StartLightSystem();
        return result;
    }

private:
    bool StartEngine() {
        cout << "Engine started!" << std::endl;
        return true;  // motor started
    }

    bool StartLightSystem() {
        cout << "Light system started!" << std::endl;
        return true;  // light is on
    }
};

int main() {
    BENZ benz;
    bool result = benz.Start();

    if (result) {
        cout << "Car started!" << std::endl;
    } else {
        cout << "Failed to start!" << std::endl;
    }

    return 0;
}
