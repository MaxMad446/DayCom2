// Auto-generated module | 2026-05-12T20:56:59.667970
#include <iostream>
#include <vector>

int compute_942() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
