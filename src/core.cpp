// Auto-generated module | 2026-05-12T20:36:10.321735
#include <iostream>
#include <vector>

int compute_346() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
