// Auto-generated module | 2026-05-12T04:36:45.436037
#include <iostream>
#include <vector>

int compute_795() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
