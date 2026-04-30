#include <iostream>
#include <string>
using namespace std;

class Generated20260430 {
public:
    // Generated class 20260430_204436_856752
    int value = 726;
    string created = "20260430_204436_856752";
    
    int process() {
        int result = value;
        for (int i = 0; i < 33; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260430 obj;
    cout << obj.process() << endl;
    return 0;
}