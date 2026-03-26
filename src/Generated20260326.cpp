#include <iostream>
#include <string>
using namespace std;

class Generated20260326 {
public:
    // Generated class 20260326_205137_022068
    int value = 567;
    string created = "20260326_205137_022068";
    
    int process() {
        int result = value;
        for (int i = 0; i < 9; i++) {
            result += i * 3;
        }
        return result;
    }
};

int main() {
    Generated20260326 obj;
    cout << obj.process() << endl;
    return 0;
}