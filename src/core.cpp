// Auto-generated module | 2026-05-12T04:08:55.418044
#include <iostream>
#include <vector>

int compute_797() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
