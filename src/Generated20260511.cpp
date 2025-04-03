#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173549_981658
    int value = 634;
    string created = "20260511_173549_981658";
    
    int process() {
        int result = value;
        for (int i = 0; i < 8; i++) {
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