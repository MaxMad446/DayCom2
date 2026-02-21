#include <iostream>
#include <string>
using namespace std;

class Generated20260221 {
public:
    // Generated class 20260221_120533_109073
    int value = 445;
    string created = "20260221_120533_109073";
    
    int process() {
        int result = value;
        for (int i = 0; i < 20; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260221 obj;
    cout << obj.process() << endl;
    return 0;
}