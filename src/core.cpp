// Auto-generated module | 2026-05-12T21:14:00.129138
#include <iostream>
#include <vector>

int compute_166() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
