#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173619_793013
    int value = 235;
    string created = "20260511_173619_793013";
    
    int process() {
        int result = value;
        for (int i = 0; i < 36; i++) {
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