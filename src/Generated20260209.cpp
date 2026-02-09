#include <iostream>
#include <string>
using namespace std;

class Generated20260209 {
public:
    // Generated class 20260209_064155_957782
    int value = 468;
    string created = "20260209_064155_957782";
    
    int process() {
        int result = value;
        for (int i = 0; i < 20; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260209 obj;
    cout << obj.process() << endl;
    return 0;
}