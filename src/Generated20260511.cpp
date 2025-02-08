#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173122_260627
    int value = 947;
    string created = "20260511_173122_260627";
    
    int process() {
        int result = value;
        for (int i = 0; i < 49; i++) {
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