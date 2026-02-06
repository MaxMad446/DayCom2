// Auto-generated module | 2026-05-12T04:46:15.911353
#include <iostream>
#include <vector>

int compute_668() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
