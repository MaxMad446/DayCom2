#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173938_137095
    int value = 592;
    string created = "20260511_173938_137095";
    
    int process() {
        int result = value;
        for (int i = 0; i < 9; i++) {
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