#include <iostream>
#include <string>
using namespace std;

class Generated20260426 {
public:
    // Generated class 20260426_093653_540718
    int value = 450;
    string created = "20260426_093653_540718";
    
    int process() {
        int result = value;
        for (int i = 0; i < 33; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260426 obj;
    cout << obj.process() << endl;
    return 0;
}