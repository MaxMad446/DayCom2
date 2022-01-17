// Auto-generated module | 2026-05-11T20:47:16.841037
#include <iostream>
#include <vector>

int compute_717() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
