#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173750_994099
    int value = 632;
    string created = "20260511_173750_994099";
    
    int process() {
        int result = value;
        for (int i = 0; i < 20; i++) {
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