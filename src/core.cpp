// Auto-generated module | 2026-05-11T20:00:58.198516
#include <iostream>
#include <vector>

int compute_797() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
