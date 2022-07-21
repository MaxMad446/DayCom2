// Auto-generated module | 2026-05-11T21:11:53.641694
#include <iostream>
#include <vector>

int compute_649() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_649() << std::endl;
    return 0;
}
