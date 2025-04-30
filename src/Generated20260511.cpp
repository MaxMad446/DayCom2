#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173801_198691
    int value = 832;
    string created = "20260511_173801_198691";
    
    int process() {
        int result = value;
        for (int i = 0; i < 33; i++) {
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