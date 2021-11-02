// Auto-generated module | 2026-05-12T21:00:35.054465
#include <iostream>
#include <vector>

int compute_754() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
