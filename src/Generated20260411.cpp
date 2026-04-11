#include <iostream>
#include <string>
using namespace std;

class Generated20260411 {
public:
    // Generated class 20260411_113233_511597
    int value = 890;
    string created = "20260411_113233_511597";
    
    int process() {
        int result = value;
        for (int i = 0; i < 6; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260411 obj;
    cout << obj.process() << endl;
    return 0;
}