#include <iostream>
#include <string>
using namespace std;

class Generated20260129 {
public:
    // Generated class 20260129_062624_754414
    int value = 264;
    string created = "20260129_062624_754414";
    
    int process() {
        int result = value;
        for (int i = 0; i < 46; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260129 obj;
    cout << obj.process() << endl;
    return 0;
}