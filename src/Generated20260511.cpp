#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173345_094664
    int value = 293;
    string created = "20260511_173345_094664";
    
    int process() {
        int result = value;
        for (int i = 0; i < 14; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}