#include <iostream>
#include <string>
using namespace std;

class Generated20260209 {
public:
    // Generated class 20260209_063908_380659
    int value = 553;
    string created = "20260209_063908_380659";
    
    int process() {
        int result = value;
        for (int i = 0; i < 16; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260209 obj;
    cout << obj.process() << endl;
    return 0;
}