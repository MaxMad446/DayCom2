#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_174044_578119
    int value = 466;
    string created = "20260511_174044_578119";
    
    int process() {
        int result = value;
        for (int i = 0; i < 18; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}