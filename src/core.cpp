// Auto-generated module | 2026-05-12T04:35:33.895783
#include <iostream>
#include <vector>

int compute_207() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
