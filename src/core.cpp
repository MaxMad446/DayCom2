// Auto-generated module | 2026-05-12T03:56:59.924031
#include <iostream>
#include <vector>

int compute_643() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
