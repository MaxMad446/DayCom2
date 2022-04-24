// Auto-generated module | 2026-05-11T20:59:56.498212
#include <iostream>
#include <vector>

int compute_333() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_333() << std::endl;
    return 0;
}
