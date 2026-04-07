#include <iostream>
#include <string>
using namespace std;

class Generated20260407 {
public:
    // Generated class 20260407_180352_895199
    int value = 647;
    string created = "20260407_180352_895199";
    
    int process() {
        int result = value;
        for (int i = 0; i < 39; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260407 obj;
    cout << obj.process() << endl;
    return 0;
}