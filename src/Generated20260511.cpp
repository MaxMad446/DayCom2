#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_174054_316965
    int value = 473;
    string created = "20260511_174054_316965";
    
    int process() {
        int result = value;
        for (int i = 0; i < 17; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}