#include <iostream>
#include <string>
using namespace std;

class Generated20260116 {
public:
    // Generated class 20260116_063345_240092
    int value = 856;
    string created = "20260116_063345_240092";
    
    int process() {
        int result = value;
        for (int i = 0; i < 29; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260116 obj;
    cout << obj.process() << endl;
    return 0;
}