#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173939_067817
    int value = 679;
    string created = "20260511_173939_067817";
    
    int process() {
        int result = value;
        for (int i = 0; i < 48; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}