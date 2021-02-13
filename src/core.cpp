// Auto-generated module | 2026-05-12T20:38:39.536960
#include <iostream>
#include <vector>

int compute_694() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
