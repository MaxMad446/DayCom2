#include <iostream>
#include <string>
using namespace std;

class Generated20260130 {
public:
    // Generated class 20260130_064702_802014
    int value = 457;
    string created = "20260130_064702_802014";
    
    int process() {
        int result = value;
        for (int i = 0; i < 28; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260130 obj;
    cout << obj.process() << endl;
    return 0;
}