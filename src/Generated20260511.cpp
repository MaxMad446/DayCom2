#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_174014_320807
    int value = 973;
    string created = "20260511_174014_320807";
    
    int process() {
        int result = value;
        for (int i = 0; i < 17; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}