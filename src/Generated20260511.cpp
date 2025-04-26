#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173744_909482
    int value = 483;
    string created = "20260511_173744_909482";
    
    int process() {
        int result = value;
        for (int i = 0; i < 17; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}