#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173704_860494
    int value = 457;
    string created = "20260511_173704_860494";
    
    int process() {
        int result = value;
        for (int i = 0; i < 39; i++) {
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