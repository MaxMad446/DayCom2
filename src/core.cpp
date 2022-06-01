// Auto-generated module | 2026-05-11T21:05:05.468038
#include <iostream>
#include <vector>

int compute_345() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
