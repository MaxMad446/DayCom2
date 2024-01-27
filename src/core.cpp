// Auto-generated module | 2026-05-11T22:24:05.491873
#include <iostream>
#include <vector>

int compute_573() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_573() << std::endl;
    return 0;
}
