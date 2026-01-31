#include <iostream>
#include <string>
using namespace std;

class Generated20260131 {
public:
    // Generated class 20260131_074136_122597
    int value = 243;
    string created = "20260131_074136_122597";
    
    int process() {
        int result = value;
        for (int i = 0; i < 40; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260131 obj;
    cout << obj.process() << endl;
    return 0;
}