#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173511_749147
    int value = 174;
    string created = "20260511_173511_749147";
    
    int process() {
        int result = value;
        for (int i = 0; i < 24; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}