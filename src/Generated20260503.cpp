#include <iostream>
#include <string>
using namespace std;

class Generated20260503 {
public:
    // Generated class 20260503_090127_583111
    int value = 496;
    string created = "20260503_090127_583111";
    
    int process() {
        int result = value;
        for (int i = 0; i < 8; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260503 obj;
    cout << obj.process() << endl;
    return 0;
}