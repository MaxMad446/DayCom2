// Auto-generated module | 2026-05-12T20:55:44.710339
#include <iostream>
#include <vector>

int compute_832() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
