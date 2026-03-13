#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_162456_288186
    int value = 383;
    string created = "20260511_162456_288186";
    
    int process() {
        int result = value;
        for (int i = 0; i < 10; i++) {
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