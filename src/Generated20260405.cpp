#include <iostream>
#include <string>
using namespace std;

class Generated20260405 {
public:
    // Generated class 20260405_155718_771227
    int value = 698;
    string created = "20260405_155718_771227";
    
    int process() {
        int result = value;
        for (int i = 0; i < 24; i++) {
            result += i * 8;
        }
        return result;
    }
};

int main() {
    Generated20260405 obj;
    cout << obj.process() << endl;
    return 0;
}