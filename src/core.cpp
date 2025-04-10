// Auto-generated module | 2026-05-12T21:16:25.888923
#include <iostream>
#include <vector>

int compute_855() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
