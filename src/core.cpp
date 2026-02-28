// Auto-generated module | 2026-05-12T04:49:21.642550
#include <iostream>
#include <vector>

int compute_828() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_828() << std::endl;
    return 0;
}
