// Auto-generated module | 2026-05-11T19:30:25.570800
#include <iostream>
#include <vector>

int compute_788() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
