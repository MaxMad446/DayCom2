#include <iostream>
#include <string>
using namespace std;

class Generated20260412 {
public:
    // Generated class 20260412_113824_931932
    int value = 250;
    string created = "20260412_113824_931932";
    
    int process() {
        int result = value;
        for (int i = 0; i < 16; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260412 obj;
    cout << obj.process() << endl;
    return 0;
}