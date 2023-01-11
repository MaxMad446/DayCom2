// Auto-generated module | 2026-05-11T21:34:31.835092
#include <iostream>
#include <vector>

int compute_794() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
