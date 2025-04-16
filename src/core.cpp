// Auto-generated module | 2026-05-12T04:06:43.528318
#include <iostream>
#include <vector>

int compute_166() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
