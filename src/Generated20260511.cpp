#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_173656_841867
    int value = 72;
    string created = "20260511_173656_841867";
    
    int process() {
        int result = value;
        for (int i = 0; i < 20; i++) {
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