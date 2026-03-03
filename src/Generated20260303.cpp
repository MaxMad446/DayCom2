#include <iostream>
#include <string>
using namespace std;

class Generated20260303 {
public:
    // Generated class 20260303_230414_060563
    int value = 331;
    string created = "20260303_230414_060563";
    
    int process() {
        int result = value;
        for (int i = 0; i < 6; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260303 obj;
    cout << obj.process() << endl;
    return 0;
}