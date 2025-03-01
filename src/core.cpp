// Auto-generated module | 2026-05-12T04:00:57.186846
#include <iostream>
#include <vector>

int compute_230() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
