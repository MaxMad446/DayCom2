// Auto-generated module | 2026-05-12T21:34:12.578900
#include <iostream>
#include <vector>

int compute_280() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
