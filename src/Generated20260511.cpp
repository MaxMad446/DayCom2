#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_172836_657975
    int value = 437;
    string created = "20260511_172836_657975";
    
    int process() {
        int result = value;
        for (int i = 0; i < 17; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}