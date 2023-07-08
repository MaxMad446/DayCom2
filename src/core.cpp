// Auto-generated module | 2026-05-11T21:57:48.756028
#include <iostream>
#include <vector>

int compute_413() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
