// Auto-generated module | 2026-05-11T21:29:47.385717
#include <iostream>
#include <vector>

int compute_498() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
