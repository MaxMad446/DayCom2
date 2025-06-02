#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_174031_089761
    int value = 268;
    string created = "20260511_174031_089761";
    
    int process() {
        int result = value;
        for (int i = 0; i < 40; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}