// Auto-generated module | 2026-05-12T06:18:20.791308
#include <iostream>
#include <vector>

int compute_487() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
