// Auto-generated module | 2026-05-12T04:47:14.241480
#include <iostream>
#include <vector>

int compute_692() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_692() << std::endl;
    return 0;
}
