#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173836_063768
    int value = 871;
    string created = "20260511_173836_063768";
    
    int process() {
        int result = value;
        for (int i = 0; i < 28; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}