// Auto-generated module | 2026-05-12T20:38:04.883710
#include <iostream>
#include <vector>

int compute_456() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
