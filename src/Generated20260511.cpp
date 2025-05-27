#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_174004_629845
    int value = 769;
    string created = "20260511_174004_629845";
    
    int process() {
        int result = value;
        for (int i = 0; i < 15; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}