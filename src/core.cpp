// Auto-generated module | 2026-05-12T04:31:39.250436
#include <iostream>
#include <vector>

int compute_317() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
