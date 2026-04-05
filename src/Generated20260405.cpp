#include <iostream>
#include <string>
using namespace std;

class Generated20260405 {
public:
    // Generated class 20260405_155310_140688
    int value = 272;
    string created = "20260405_155310_140688";
    
    int process() {
        int result = value;
        for (int i = 0; i < 17; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260405 obj;
    cout << obj.process() << endl;
    return 0;
}