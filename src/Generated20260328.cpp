#include <iostream>
#include <string>
using namespace std;

class Generated20260328 {
public:
    // Generated class 20260328_135143_788536
    int value = 608;
    string created = "20260328_135143_788536";
    
    int process() {
        int result = value;
        for (int i = 0; i < 11; i++) {
            result += i * 4;
        }
        return result;
    }
};

int main() {
    Generated20260328 obj;
    cout << obj.process() << endl;
    return 0;
}