#include <iostream>
#include <string>
using namespace std;

class Generated20260123 {
public:
    // Generated class 20260123_064127_796403
    int value = 802;
    string created = "20260123_064127_796403";
    
    int process() {
        int result = value;
        for (int i = 0; i < 20; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260123 obj;
    cout << obj.process() << endl;
    return 0;
}