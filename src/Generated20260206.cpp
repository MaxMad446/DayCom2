#include <iostream>
#include <string>
using namespace std;

class Generated20260206 {
public:
    // Generated class 20260206_062755_749730
    int value = 889;
    string created = "20260206_062755_749730";
    
    int process() {
        int result = value;
        for (int i = 0; i < 26; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260206 obj;
    cout << obj.process() << endl;
    return 0;
}