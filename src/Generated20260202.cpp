#include <iostream>
#include <string>
using namespace std;

class Generated20260202 {
public:
    // Generated class 20260202_061953_327020
    int value = 928;
    string created = "20260202_061953_327020";
    
    int process() {
        int result = value;
        for (int i = 0; i < 19; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260202 obj;
    cout << obj.process() << endl;
    return 0;
}