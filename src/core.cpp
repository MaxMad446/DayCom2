// Auto-generated module | 2026-05-11T20:19:16.095392
#include <iostream>
#include <vector>

int compute_265() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}
