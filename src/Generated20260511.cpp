#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_174101_992243
    int value = 743;
    string created = "20260511_174101_992243";
    
    int process() {
        int result = value;
        for (int i = 0; i < 24; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}