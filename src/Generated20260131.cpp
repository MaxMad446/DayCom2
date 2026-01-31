#include <iostream>
#include <string>
using namespace std;

class Generated20260131 {
public:
    // Generated class 20260131_074858_068639
    int value = 544;
    string created = "20260131_074858_068639";
    
    int process() {
        int result = value;
        for (int i = 0; i < 15; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260131 obj;
    cout << obj.process() << endl;
    return 0;
}