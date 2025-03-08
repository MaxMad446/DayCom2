#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173340_422348
    int value = 927;
    string created = "20260511_173340_422348";
    
    int process() {
        int result = value;
        for (int i = 0; i < 30; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}