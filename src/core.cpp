// Auto-generated module | 2026-05-12T04:24:38.558318
#include <iostream>
#include <vector>

int compute_221() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
