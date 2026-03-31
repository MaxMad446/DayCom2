#include <iostream>
#include <string>
using namespace std;

class Generated20260331 {
public:
    // Generated class 20260331_193522_870122
    int value = 365;
    string created = "20260331_193522_870122";
    
    int process() {
        int result = value;
        for (int i = 0; i < 13; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260331 obj;
    cout << obj.process() << endl;
    return 0;
}