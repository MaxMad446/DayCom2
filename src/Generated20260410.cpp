#include <iostream>
#include <string>
using namespace std;

class Generated20260410 {
public:
    // Generated class 20260410_164103_382867
    int value = 18;
    string created = "20260410_164103_382867";
    
    int process() {
        int result = value;
        for (int i = 0; i < 6; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260410 obj;
    cout << obj.process() << endl;
    return 0;
}