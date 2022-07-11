// Auto-generated module | 2026-05-14T06:14:38.585025
#include <iostream>
#include <vector>

int compute_487() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
