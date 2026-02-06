#include <iostream>
#include <string>
using namespace std;

class Generated20260206 {
public:
    // Generated class 20260206_062522_061372
    int value = 753;
    string created = "20260206_062522_061372";
    
    int process() {
        int result = value;
        for (int i = 0; i < 19; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260206 obj;
    cout << obj.process() << endl;
    return 0;
}