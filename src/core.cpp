// Auto-generated module | 2026-05-13T20:53:03.056146
#include <iostream>
#include <vector>

int compute_744() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
