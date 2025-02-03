#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173058_186460
    int value = 707;
    string created = "20260511_173058_186460";
    
    int process() {
        int result = value;
        for (int i = 0; i < 16; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}