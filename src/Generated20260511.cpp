#include <iostream>
#include <string>
using namespace std;

class Generated20260511 {
public:
    // Generated class 20260511_172928_170225
    int value = 813;
    string created = "20260511_172928_170225";
    
    int process() {
        int result = value;
        for (int i = 0; i < 47; i++) {
            result += i * 10;
        }
        return result;
    }
};

int main() {
    Generated20260511 obj;
    cout << obj.process() << endl;
    return 0;
}