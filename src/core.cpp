// Auto-generated module | 2026-05-11T21:35:01.618365
#include <iostream>
#include <vector>

int compute_322() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
