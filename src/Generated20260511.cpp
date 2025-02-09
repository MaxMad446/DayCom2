#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173126_908120
    int value = 800;
    string created = "20260511_173126_908120";
    
    int process() {
        int result = value;
        for (int i = 0; i < 43; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}