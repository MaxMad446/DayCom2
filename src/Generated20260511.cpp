#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_174033_354764
    int value = 153;
    string created = "20260511_174033_354764";
    
    int process() {
        int result = value;
        for (int i = 0; i < 35; i++) {
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