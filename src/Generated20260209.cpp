#include <iostream>
#include <string>
using namespace std;

class Generated20260209 {
public:
    // Generated class 20260209_063602_932752
    int value = 514;
    string created = "20260209_063602_932752";
    
    int process() {
        int result = value;
        for (int i = 0; i < 21; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260209 obj;
    cout << obj.process() << endl;
    return 0;
}