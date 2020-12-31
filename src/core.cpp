// Auto-generated module | 2026-05-11T19:57:29.278099
#include <iostream>
#include <vector>

int compute_413() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
