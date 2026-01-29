#include <iostream>
#include <string>
using namespace std;

class Generated20260129 {
public:
    // Generated class 20260129_062317_938769
    int value = 237;
    string created = "20260129_062317_938769";
    
    int process() {
        int result = value;
        for (int i = 0; i < 7; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260129 obj;
    cout << obj.process() << endl;
    return 0;
}