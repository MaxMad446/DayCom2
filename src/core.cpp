// Auto-generated module | 2026-05-11T19:38:33.384470
#include <iostream>
#include <vector>

int compute_660() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
