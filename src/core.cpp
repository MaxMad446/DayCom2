// Auto-generated module | 2026-05-12T04:15:39.012280
#include <iostream>
#include <vector>

int compute_723() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
