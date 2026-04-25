#include <iostream>
#include <string>
using namespace std;

class Generated20260425 {
public:
    // Generated class 20260425_090111_677583
    int value = 379;
    string created = "20260425_090111_677583";
    
    int process() {
        int result = value;
        for (int i = 0; i < 19; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260425 obj;
    cout << obj.process() << endl;
    return 0;
}