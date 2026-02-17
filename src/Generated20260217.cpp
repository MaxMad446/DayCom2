#include <iostream>
#include <string>
using namespace std;

class Generated20260217 {
public:
    // Generated class 20260217_061527_119947
    int value = 363;
    string created = "20260217_061527_119947";
    
    int process() {
        int result = value;
        for (int i = 0; i < 36; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260217 obj;
    cout << obj.process() << endl;
    return 0;
}