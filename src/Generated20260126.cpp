#include <iostream>
#include <string>
using namespace std;

class Generated20260126 {
public:
    // Generated class 20260126_061640_687554
    int value = 514;
    string created = "20260126_061640_687554";
    
    int process() {
        int result = value;
        for (int i = 0; i < 38; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260126 obj;
    cout << obj.process() << endl;
    return 0;
}