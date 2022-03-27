// Auto-generated module | 2026-05-11T20:56:14.633319
#include <iostream>
#include <vector>

int compute_649() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_649() << std::endl;
    return 0;
}
