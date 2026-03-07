#include <iostream>
#include <string>
using namespace std;

class Generated20260307 {
public:
    // Generated class 20260307_090353_279914
    int value = 827;
    string created = "20260307_090353_279914";
    
    int process() {
        int result = value;
        for (int i = 0; i < 23; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260307 obj;
    cout << obj.process() << endl;
    return 0;
}