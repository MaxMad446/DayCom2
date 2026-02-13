#include <iostream>
#include <string>
using namespace std;

class Generated20260213 {
public:
    // Generated class 20260213_223622_035507
    int value = 442;
    string created = "20260213_223622_035507";
    
    int process() {
        int result = value;
        for (int i = 0; i < 24; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260213 obj;
    cout << obj.process() << endl;
    return 0;
}