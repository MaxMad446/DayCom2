// Auto-generated module | 2026-05-12T20:56:08.025997
#include <iostream>
#include <vector>

int compute_649() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_649() << std::endl;
    return 0;
}
