// Auto-generated module | 2026-05-12T04:31:44.306571
#include <iostream>
#include <vector>

int compute_411() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_411() << std::endl;
    return 0;
}
