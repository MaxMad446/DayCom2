// Auto-generated module | 2026-05-12T03:43:51.105573
#include <iostream>
#include <vector>

int compute_877() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
