#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_162504_343989
    int value = 577;
    string created = "20260511_162504_343989";
    
    int process() {
        int result = value;
        for (int i = 0; i < 19; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}