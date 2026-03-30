#include <iostream>
#include <string>
using namespace std;

class Generated20260330 {
public:
    // Generated class 20260330_190746_098091
    int value = 390;
    string created = "20260330_190746_098091";
    
    int process() {
        int result = value;
        for (int i = 0; i < 25; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260330 obj;
    cout << obj.process() << endl;
    return 0;
}