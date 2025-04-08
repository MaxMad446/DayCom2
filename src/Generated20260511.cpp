#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173608_924674
    int value = 602;
    string created = "20260511_173608_924674";
    
    int process() {
        int result = value;
        for (int i = 0; i < 42; i++) {
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