#include <iostream>
#include <string>
using namespace std;

class Generated20260418 {
public:
    // Generated class 20260418_093420_090854
    int value = 637;
    string created = "20260418_093420_090854";
    
    int process() {
        int result = value;
        for (int i = 0; i < 28; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260418 obj;
    cout << obj.process() << endl;
    return 0;
}