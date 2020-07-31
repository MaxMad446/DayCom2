// Auto-generated module | 2026-05-11T19:37:13.586440
#include <iostream>
#include <vector>

int compute_548() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
