#include <iostream>
#include <string>
using namespace std;

class Generated20260116 {
public:
    // Generated class 20260116_063912_968049
    int value = 109;
    string created = "20260116_063912_968049";
    
    int process() {
        int result = value;
        for (int i = 0; i < 27; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260116 obj;
    cout << obj.process() << endl;
    return 0;
}