#include <iostream>
#include <string>
using namespace std;

class Generated20260418 {
public:
    // Generated class 20260418_092836_378942
    int value = 824;
    string created = "20260418_092836_378942";
    
    int process() {
        int result = value;
        for (int i = 0; i < 30; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260418 obj;
    cout << obj.process() << endl;
    return 0;
}