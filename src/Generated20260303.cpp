#include <iostream>
#include <string>
using namespace std;

class Generated20260303 {
public:
    // Generated class 20260303_230724_446629
    int value = 243;
    string created = "20260303_230724_446629";
    
    int process() {
        int result = value;
        for (int i = 0; i < 43; i++) {
            result += i * 6;
        }
        return result;
    }
};

int main() {
    Generated20260303 obj;
    cout << obj.process() << endl;
    return 0;
}