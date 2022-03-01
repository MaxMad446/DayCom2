// Auto-generated module | 2026-05-11T20:52:53.458761
#include <iostream>
#include <vector>

int compute_169() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
