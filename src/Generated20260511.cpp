#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_172903_412608
    int value = 150;
    string created = "20260511_172903_412608";
    
    int process() {
        int result = value;
        for (int i = 0; i < 5; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}