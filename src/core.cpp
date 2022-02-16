// Auto-generated module | 2026-05-13T22:04:23.006467
#include <iostream>
#include <vector>

int compute_276() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}
