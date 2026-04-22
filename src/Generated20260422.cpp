#include <iostream>
#include <string>
using namespace std;

class Generated20260422 {
public:
    // Generated class 20260422_184135_106460
    int value = 45;
    string created = "20260422_184135_106460";
    
    int process() {
        int result = value;
        for (int i = 0; i < 19; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260422 obj;
    cout << obj.process() << endl;
    return 0;
}