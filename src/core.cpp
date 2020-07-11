// Auto-generated module | 2026-05-11T19:34:36.536491
#include <iostream>
#include <vector>

int compute_867() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_867() << std::endl;
    return 0;
}
