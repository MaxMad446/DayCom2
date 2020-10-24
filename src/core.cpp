// Auto-generated module | 2026-05-12T19:57:48.086704
#include <iostream>
#include <vector>

int compute_509() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
