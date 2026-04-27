#include <iostream>
#include <string>
using namespace std;

class Generated20260427 {
public:
    // Generated class 20260427_175255_292787
    int value = 464;
    string created = "20260427_175255_292787";
    
    int process() {
        int result = value;
        for (int i = 0; i < 25; i++) {
            result += i * 7;
        }
        return result;
    }
};

int main() {
    Generated20260427 obj;
    cout << obj.process() << endl;
    return 0;
}