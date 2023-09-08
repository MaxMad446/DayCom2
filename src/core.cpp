// Auto-generated module | 2026-05-11T22:05:35.779945
#include <iostream>
#include <vector>

int compute_178() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
