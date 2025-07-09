// Auto-generated module | 2026-05-12T04:17:38.459949
#include <iostream>
#include <vector>

int compute_602() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
