// Auto-generated module | 2026-05-12T04:06:47.133461
#include <iostream>
#include <vector>

int compute_446() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
