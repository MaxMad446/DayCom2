#include <iostream>
#include <string>
using namespace std;

class Generated20260125 {
public:
    // Generated class 20260125_090805_499095
    int value = 631;
    string created = "20260125_090805_499095";
    
    int process() {
        int result = value;
        for (int i = 0; i < 27; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260125 obj;
    cout << obj.process() << endl;
    return 0;
}