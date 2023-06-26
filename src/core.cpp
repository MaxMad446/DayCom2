// Auto-generated module | 2026-05-13T20:48:19.216309
#include <iostream>
#include <vector>

int compute_444() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_444() << std::endl;
    return 0;
}
