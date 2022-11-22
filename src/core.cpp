// Auto-generated module | 2026-05-11T21:27:54.355299
#include <iostream>
#include <vector>

int compute_139() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
