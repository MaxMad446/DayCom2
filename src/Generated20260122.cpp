#include <iostream>
#include <string>
using namespace std;

class Generated20260122 {
public:
    // Generated class 20260122_200624_389946
    int value = 240;
    string created = "20260122_200624_389946";
    
    int process() {
        int result = value;
        for (int i = 0; i < 30; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260122 obj;
    cout << obj.process() << endl;
    return 0;
}