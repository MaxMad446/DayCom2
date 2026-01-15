#include <iostream>
#include <string>
using namespace std;

class Generated20260115 {
public:
    // Generated class 20260115_063753_018725
    int value = 486;
    string created = "20260115_063753_018725";
    
    int process() {
        int result = value;
        for (int i = 0; i < 44; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260115 obj;
    cout << obj.process() << endl;
    return 0;
}