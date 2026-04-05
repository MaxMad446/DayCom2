#include <iostream>
#include <string>
using namespace std;

class Generated20260405 {
public:
    // Generated class 20260405_155421_334524
    int value = 623;
    string created = "20260405_155421_334524";
    
    int process() {
        int result = value;
        for (int i = 0; i < 37; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260405 obj;
    cout << obj.process() << endl;
    return 0;
}