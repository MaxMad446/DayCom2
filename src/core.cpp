// Auto-generated module | 2026-05-11T21:25:39.369523
#include <iostream>
#include <vector>

int compute_425() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
