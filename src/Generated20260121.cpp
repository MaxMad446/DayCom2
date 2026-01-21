#include <iostream>
#include <string>
using namespace std;

class Generated20260121 {
public:
    // Generated class 20260121_193536_689915
    int value = 158;
    string created = "20260121_193536_689915";
    
    int process() {
        int result = value;
        for (int i = 0; i < 26; i++) {
            result += i * 9;
        }
        return result;
    }
};

int main() {
    Generated20260121 obj;
    cout << obj.process() << endl;
    return 0;
}