// Auto-generated module | 2026-05-12T04:42:27.474957
#include <iostream>
#include <vector>

int compute_375() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_375() << std::endl;
    return 0;
}
