#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173838_463870
    int value = 347;
    string created = "20260511_173838_463870";
    
    int process() {
        int result = value;
        for (int i = 0; i < 40; i++) {
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