#include <iostream>
#include <string>
using namespace std;

class Generated20260226 {
public:
    // Generated class 20260226_194401_188832
    int value = 353;
    string created = "20260226_194401_188832";
    
    int process() {
        int result = value;
        for (int i = 0; i < 38; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260226 obj;
    cout << obj.process() << endl;
    return 0;
}