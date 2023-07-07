// Auto-generated module | 2026-05-11T21:57:39.582433
#include <iostream>
#include <vector>

int compute_763() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
