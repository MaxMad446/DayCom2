#include <iostream>
#include <string>
using namespace std;

class Generated20260129 {
public:
    // Generated class 20260129_062458_350043
    int value = 805;
    string created = "20260129_062458_350043";
    
    int process() {
        int result = value;
        for (int i = 0; i < 5; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260129 obj;
    cout << obj.process() << endl;
    return 0;
}