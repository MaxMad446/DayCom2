#include <iostream>
#include <string>
using namespace std;

class Generated20260201 {
public:
    // Generated class 20260201_180110_788781
    int value = 758;
    string created = "20260201_180110_788781";
    
    int process() {
        int result = value;
        for (int i = 0; i < 40; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260201 obj;
    cout << obj.process() << endl;
    return 0;
}