#include <iostream>
#include <string>
using namespace std;

class Generated20260129 {
public:
    // Generated class 20260129_062132_701863
    int value = 422;
    string created = "20260129_062132_701863";
    
    int process() {
        int result = value;
        for (int i = 0; i < 34; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260129 obj;
    cout << obj.process() << endl;
    return 0;
}