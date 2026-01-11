#include <iostream>
#include <string>
using namespace std;

class Generated20260111 {
public:
    // Generated class 20260111_203559_717895
    int value = 122;
    string created = "20260111_203559_717895";
    
    int process() {
        int result = value;
        for (int i = 0; i < 36; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260111 obj;
    cout << obj.process() << endl;
    return 0;
}