// Auto-generated module | 2026-05-14T18:06:06.773193
#include <iostream>
#include <vector>

int compute_287() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
