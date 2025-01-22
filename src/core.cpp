// Auto-generated module | 2026-05-12T03:55:43.272721
#include <iostream>
#include <vector>

int compute_462() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
