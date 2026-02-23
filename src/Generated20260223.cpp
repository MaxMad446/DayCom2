#include <iostream>
#include <string>
using namespace std;

class Generated20260223 {
public:
    // Generated class 20260223_102122_735482
    int value = 219;
    string created = "20260223_102122_735482";
    
    int process() {
        int result = value;
        for (int i = 0; i < 20; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260223 obj;
    cout << obj.process() << endl;
    return 0;
}