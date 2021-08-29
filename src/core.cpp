// Auto-generated module | 2026-05-12T20:54:59.156248
#include <iostream>
#include <vector>

int compute_883() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
