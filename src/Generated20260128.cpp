#include <iostream>
#include <string>
using namespace std;

class Generated20260128 {
public:
    // Generated class 20260128_055125_893909
    int value = 751;
    string created = "20260128_055125_893909";
    
    int process() {
        int result = value;
        for (int i = 0; i < 17; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260128 obj;
    cout << obj.process() << endl;
    return 0;
}