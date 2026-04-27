#include <iostream>
#include <string>
using namespace std;

class Generated20260427 {
public:
    // Generated class 20260427_174856_709502
    int value = 715;
    string created = "20260427_174856_709502";
    
    int process() {
        int result = value;
        for (int i = 0; i < 29; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260427 obj;
    cout << obj.process() << endl;
    return 0;
}