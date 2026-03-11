#include <iostream>
#include <string>
using namespace std;

class Generated20260311 {
public:
    // Generated class 20260311_194745_672057
    int value = 393;
    string created = "20260311_194745_672057";
    
    int process() {
        int result = value;
        for (int i = 0; i < 29; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260311 obj;
    cout << obj.process() << endl;
    return 0;
}