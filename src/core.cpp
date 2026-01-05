// Auto-generated module | 2026-05-12T04:41:58.127704
#include <iostream>
#include <vector>

int compute_700() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}
