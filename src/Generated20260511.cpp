#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173819_371207
    int value = 586;
    string created = "20260511_173819_371207";
    
    int process() {
        int result = value;
        for (int i = 0; i < 35; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}