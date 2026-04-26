#include <iostream>
#include <string>
using namespace std;

class Generated20260426 {
public:
    // Generated class 20260426_142608_472975
    int value = 185;
    string created = "20260426_142608_472975";
    
    int process() {
        int result = value;
        for (int i = 0; i < 29; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260426 obj;
    cout << obj.process() << endl;
    return 0;
}