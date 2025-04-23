#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173725_327661
    int value = 487;
    string created = "20260511_173725_327661";
    
    int process() {
        int result = value;
        for (int i = 0; i < 27; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}