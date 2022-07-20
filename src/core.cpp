// Auto-generated module | 2026-05-11T21:11:41.252650
#include <iostream>
#include <vector>

int compute_748() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
