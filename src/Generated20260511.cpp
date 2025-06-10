#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_174105_589935
    int value = 687;
    string created = "20260511_174105_589935";
    
    int process() {
        int result = value;
        for (int i = 0; i < 21; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}