// Auto-generated module | 2026-05-12T21:34:13.600131
#include <iostream>
#include <vector>

int compute_884() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}
