#include <iostream>
#include <string>
using namespace std;

class Generated20260209 {
public:
    // Generated class 20260209_064009_572058
    int value = 241;
    string created = "20260209_064009_572058";
    
    int process() {
        int result = value;
        for (int i = 0; i < 49; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260209 obj;
    cout << obj.process() << endl;
    return 0;
}