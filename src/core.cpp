// Auto-generated module | 2026-05-12T20:40:54.050875
#include <iostream>
#include <vector>

int compute_487() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
