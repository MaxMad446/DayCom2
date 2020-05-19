// Auto-generated module | 2026-05-11T19:27:35.036762
#include <iostream>
#include <vector>

int compute_278() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
