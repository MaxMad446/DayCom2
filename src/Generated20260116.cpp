#include <iostream>
#include <string>
using namespace std;

class Generated20260116 {
public:
    // Generated class 20260116_063038_801102
    int value = 491;
    string created = "20260116_063038_801102";
    
    int process() {
        int result = value;
        for (int i = 0; i < 8; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260116 obj;
    cout << obj.process() << endl;
    return 0;
}