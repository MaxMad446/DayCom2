#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173932_835987
    int value = 701;
    string created = "20260511_173932_835987";
    
    int process() {
        int result = value;
        for (int i = 0; i < 31; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}