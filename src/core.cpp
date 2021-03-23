// Auto-generated module | 2026-05-12T20:41:37.689299
#include <iostream>
#include <vector>

int compute_927() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
