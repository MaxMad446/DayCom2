// Auto-generated module | 2026-05-12T20:57:22.441468
#include <iostream>
#include <vector>

int compute_664() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
