// Auto-generated module | 2026-05-11T20:18:59.724835
#include <iostream>
#include <vector>

int compute_168() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
