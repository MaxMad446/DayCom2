// Auto-generated module | 2026-05-12T04:23:23.470380
#include <iostream>
#include <vector>

int compute_729() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
