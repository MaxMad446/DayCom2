#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173207_271940
    int value = 563;
    string created = "20260511_173207_271940";
    
    int process() {
        int result = value;
        for (int i = 0; i < 18; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}