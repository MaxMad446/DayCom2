#include <iostream>
#include <string>
using namespace std;

class Generated20260130 {
public:
    // Generated class 20260130_064511_621565
    int value = 405;
    string created = "20260130_064511_621565";
    
    int process() {
        int result = value;
        for (int i = 0; i < 18; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260130 obj;
    cout << obj.process() << endl;
    return 0;
}