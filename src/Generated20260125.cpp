#include <iostream>
#include <string>
using namespace std;

class Generated20260125 {
public:
    // Generated class 20260125_090226_786469
    int value = 791;
    string created = "20260125_090226_786469";
    
    int process() {
        int result = value;
        for (int i = 0; i < 24; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260125 obj;
    cout << obj.process() << endl;
    return 0;
}