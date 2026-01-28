#include <iostream>
#include <string>
using namespace std;

class Generated20260128 {
public:
    // Generated class 20260128_054507_151811
    int value = 132;
    string created = "20260128_054507_151811";
    
    int process() {
        int result = value;
        for (int i = 0; i < 11; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260128 obj;
    cout << obj.process() << endl;
    return 0;
}