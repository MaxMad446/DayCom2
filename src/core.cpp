// Auto-generated module | 2026-05-12T04:17:57.630830
#include <iostream>
#include <vector>

int compute_372() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
