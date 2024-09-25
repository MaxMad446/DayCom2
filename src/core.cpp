// Auto-generated module | 2026-05-12T03:40:08.973423
#include <iostream>
#include <vector>

int compute_298() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
