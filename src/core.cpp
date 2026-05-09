// Auto-generated module | 2026-05-12T06:22:39.137408
#include <iostream>
#include <vector>

int compute_911() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
