#include <iostream>
#include <string>
using namespace std;

class Generated20260504 {
public:
    // Generated class 20260504_173553_611859
    int value = 225;
    string created = "20260504_173553_611859";
    
    int process() {
        int result = value;
        for (int i = 0; i < 22; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260504 obj;
    cout << obj.process() << endl;
    return 0;
}