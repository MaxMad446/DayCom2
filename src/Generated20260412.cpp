#include <iostream>
#include <string>
using namespace std;

class Generated20260412 {
public:
    // Generated class 20260412_155311_288889
    int value = 981;
    string created = "20260412_155311_288889";
    
    int process() {
        int result = value;
        for (int i = 0; i < 46; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260412 obj;
    cout << obj.process() << endl;
    return 0;
}