// Auto-generated module | 2026-05-12T04:35:12.823438
#include <iostream>
#include <vector>

int compute_110() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
