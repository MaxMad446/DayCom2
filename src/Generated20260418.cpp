#include <iostream>
#include <string>
using namespace std;

class Generated20260418 {
public:
    // Generated class 20260418_093332_456143
    int value = 961;
    string created = "20260418_093332_456143";
    
    int process() {
        int result = value;
        for (int i = 0; i < 20; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260418 obj;
    cout << obj.process() << endl;
    return 0;
}