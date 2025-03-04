#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173318_984822
    int value = 413;
    string created = "20260511_173318_984822";
    
    int process() {
        int result = value;
        for (int i = 0; i < 35; i++) {
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