#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173914_286860
    int value = 702;
    string created = "20260511_173914_286860";
    
    int process() {
        int result = value;
        for (int i = 0; i < 13; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}