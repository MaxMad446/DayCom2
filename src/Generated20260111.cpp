#include <iostream>
#include <string>
using namespace std;

class Generated20260111 {
public:
    // Generated class 20260111_203742_079886
    int value = 482;
    string created = "20260111_203742_079886";
    
    int process() {
        int result = value;
        for (int i = 0; i < 41; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260111 obj;
    cout << obj.process() << endl;
    return 0;
}