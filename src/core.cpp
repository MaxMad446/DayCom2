// Auto-generated module | 2026-05-11T20:25:24.433800
#include <iostream>
#include <vector>

int compute_652() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
