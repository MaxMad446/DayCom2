// Auto-generated module | 2026-05-11T22:12:57.655423
#include <iostream>
#include <vector>

int compute_487() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
