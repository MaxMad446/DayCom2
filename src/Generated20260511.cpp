#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173105_203204
    int value = 125;
    string created = "20260511_173105_203204";
    
    int process() {
        int result = value;
        for (int i = 0; i < 43; i++) {
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