#include <iostream>
#include <string>
using namespace std;

class Generated20260122 {
public:
    // Generated class 20260122_200905_811202
    int value = 138;
    string created = "20260122_200905_811202";
    
    int process() {
        int result = value;
        for (int i = 0; i < 33; i++) {
            result += i * 5;
        }
        return result;
    }
};

int main() {
    Generated20260122 obj;
    cout << obj.process() << endl;
    return 0;
}