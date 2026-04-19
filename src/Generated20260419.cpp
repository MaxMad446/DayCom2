#include <iostream>
#include <string>
using namespace std;

class Generated20260419 {
public:
    // Generated class 20260419_143059_855545
    int value = 374;
    string created = "20260419_143059_855545";
    
    int process() {
        int result = value;
        for (int i = 0; i < 22; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260419 obj;
    cout << obj.process() << endl;
    return 0;
}