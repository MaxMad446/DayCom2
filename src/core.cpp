// Auto-generated module | 2026-05-12T03:42:43.173144
#include <iostream>
#include <vector>

int compute_699() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
