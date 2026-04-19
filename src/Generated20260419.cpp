#include <iostream>
#include <string>
using namespace std;

class Generated20260419 {
public:
    // Generated class 20260419_142832_448811
    int value = 896;
    string created = "20260419_142832_448811";
    
    int process() {
        int result = value;
        for (int i = 0; i < 48; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260419 obj;
    cout << obj.process() << endl;
    return 0;
}