#include <iostream>
#include <string>
using namespace std;

class Generated20260128 {
public:
    // Generated class 20260128_054834_537467
    int value = 42;
    string created = "20260128_054834_537467";
    
    int process() {
        int result = value;
        for (int i = 0; i < 31; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260128 obj;
    cout << obj.process() << endl;
    return 0;
}