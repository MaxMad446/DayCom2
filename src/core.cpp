// Auto-generated module | 2026-05-14T18:03:22.918837
#include <iostream>
#include <vector>

int compute_847() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
