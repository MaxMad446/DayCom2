#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_172915_130576
    int value = 324;
    string created = "20260511_172915_130576";
    
    int process() {
        int result = value;
        for (int i = 0; i < 35; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}