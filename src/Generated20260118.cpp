#include <iostream>
#include <string>
using namespace std;

class Generated20260118 {
public:
    // Generated class 20260118_090217_210244
    int value = 844;
    string created = "20260118_090217_210244";
    
    int process() {
        int result = value;
        for (int i = 0; i < 31; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260118 obj;
    cout << obj.process() << endl;
    return 0;
}