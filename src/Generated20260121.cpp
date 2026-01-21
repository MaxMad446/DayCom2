#include <iostream>
#include <string>
using namespace std;

class Generated20260121 {
public:
    // Generated class 20260121_193505_510022
    int value = 252;
    string created = "20260121_193505_510022";
    
    int process() {
        int result = value;
        for (int i = 0; i < 29; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260121 obj;
    cout << obj.process() << endl;
    return 0;
}