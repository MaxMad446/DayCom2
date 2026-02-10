#include <iostream>
#include <string>
using namespace std;

class Generated20260210 {
public:
    // Generated class 20260210_064208_444204
    int value = 382;
    string created = "20260210_064208_444204";
    
    int process() {
        int result = value;
        for (int i = 0; i < 22; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260210 obj;
    cout << obj.process() << endl;
    return 0;
}