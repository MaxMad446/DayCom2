#include <iostream>
#include <string>
using namespace std;

class Generated20260412 {
public:
    // Generated class 20260412_155604_672012
    int value = 131;
    string created = "20260412_155604_672012";
    
    int process() {
        int result = value;
        for (int i = 0; i < 31; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260412 obj;
    cout << obj.process() << endl;
    return 0;
}