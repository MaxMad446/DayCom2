#include <iostream>
#include <string>
using namespace std;

class Generated20260126 {
public:
    // Generated class 20260126_062157_483549
    int value = 742;
    string created = "20260126_062157_483549";
    
    int process() {
        int result = value;
        for (int i = 0; i < 43; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260126 obj;
    cout << obj.process() << endl;
    return 0;
}