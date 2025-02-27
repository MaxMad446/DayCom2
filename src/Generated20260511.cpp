#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173251_738137
    int value = 13;
    string created = "20260511_173251_738137";
    
    int process() {
        int result = value;
        for (int i = 0; i < 49; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}