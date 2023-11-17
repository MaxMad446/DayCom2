// Auto-generated module | 2026-05-13T21:00:13.434909
#include <iostream>
#include <vector>

int compute_503() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
