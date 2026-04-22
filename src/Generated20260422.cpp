#include <iostream>
#include <string>
using namespace std;

class Generated20260422 {
public:
    // Generated class 20260422_183555_206580
    int value = 355;
    string created = "20260422_183555_206580";
    
    int process() {
        int result = value;
        for (int i = 0; i < 27; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260422 obj;
    cout << obj.process() << endl;
    return 0;
}