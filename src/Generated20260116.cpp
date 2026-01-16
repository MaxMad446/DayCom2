#include <iostream>
#include <string>
using namespace std;

class Generated20260116 {
public:
    // Generated class 20260116_063533_426928
    int value = 514;
    string created = "20260116_063533_426928";
    
    int process() {
        int result = value;
        for (int i = 0; i < 27; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260116 obj;
    cout << obj.process() << endl;
    return 0;
}