// Auto-generated module | 2026-05-11T19:57:51.307532
#include <iostream>
#include <vector>

int compute_766() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
