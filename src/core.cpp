// Auto-generated module | 2026-05-12T21:13:09.986643
#include <iostream>
#include <vector>

int compute_597() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
