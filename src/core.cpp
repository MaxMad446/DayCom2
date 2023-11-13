// Auto-generated module | 2026-05-11T22:14:19.023698
#include <iostream>
#include <vector>

int compute_372() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
