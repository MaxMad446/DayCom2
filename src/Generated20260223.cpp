#include <iostream>
#include <string>
using namespace std;

class Generated20260223 {
public:
    // Generated class 20260223_101847_256506
    int value = 131;
    string created = "20260223_101847_256506";
    
    int process() {
        int result = value;
        for (int i = 0; i < 48; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260223 obj;
    cout << obj.process() << endl;
    return 0;
}