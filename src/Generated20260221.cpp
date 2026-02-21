#include <iostream>
#include <string>
using namespace std;

class Generated20260221 {
public:
    // Generated class 20260221_120649_296999
    int value = 816;
    string created = "20260221_120649_296999";
    
    int process() {
        int result = value;
        for (int i = 0; i < 5; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260221 obj;
    cout << obj.process() << endl;
    return 0;
}