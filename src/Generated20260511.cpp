#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173331_253224
    int value = 392;
    string created = "20260511_173331_253224";
    
    int process() {
        int result = value;
        for (int i = 0; i < 47; i++) {
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