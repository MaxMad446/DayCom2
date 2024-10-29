// Auto-generated module | 2026-05-12T03:44:35.282142
#include <iostream>
#include <vector>

int compute_487() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
