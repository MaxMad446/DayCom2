#include <iostream>
#include <string>
using namespace std;

class Generated20260401 {
public:
    // Generated class 20260401_200521_756077
    int value = 614;
    string created = "20260401_200521_756077";
    
    int process() {
        int result = value;
        for (int i = 0; i < 35; i++) {
            result += i * 2;
        }
        return result;
    }
};

int main() {
    Generated20260401 obj;
    cout << obj.process() << endl;
    return 0;
}