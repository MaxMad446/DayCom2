#include <iostream>
#include <string>
using namespace std;

class Generated20260113 {
public:
    // Generated class 20260113_205012_580737
    int value = 903;
    string created = "20260113_205012_580737";
    
    int process() {
        int result = value;
        for (int i = 0; i < 25; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260113 obj;
    cout << obj.process() << endl;
    return 0;
}