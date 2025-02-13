#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173148_221606
    int value = 179;
    string created = "20260511_173148_221606";
    
    int process() {
        int result = value;
        for (int i = 0; i < 41; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}