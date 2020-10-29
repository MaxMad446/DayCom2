// Auto-generated module | 2026-05-12T19:58:15.105845
#include <iostream>
#include <vector>

int compute_379() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
