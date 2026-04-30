#include <iostream>
#include <string>
using namespace std;

class Generated20260430 {
public:
    // Generated class 20260430_203916_276701
    int value = 507;
    string created = "20260430_203916_276701";
    
    int process() {
        int result = value;
        for (int i = 0; i < 7; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260430 obj;
    cout << obj.process() << endl;
    return 0;
}