#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_172830_414450
    int value = 42;
    string created = "20260511_172830_414450";
    
    int process() {
        int result = value;
        for (int i = 0; i < 21; i++) {
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