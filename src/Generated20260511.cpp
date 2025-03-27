#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173516_524872
    int value = 116;
    string created = "20260511_173516_524872";
    
    int process() {
        int result = value;
        for (int i = 0; i < 41; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}