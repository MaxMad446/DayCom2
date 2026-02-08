#include <iostream>
#include <string>
using namespace std;

class Generated20260208 {
public:
    // Generated class 20260208_131045_818545
    int value = 404;
    string created = "20260208_131045_818545";
    
    int process() {
        int result = value;
        for (int i = 0; i < 37; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260208 obj;
    cout << obj.process() << endl;
    return 0;
}