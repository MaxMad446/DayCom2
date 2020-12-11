// Auto-generated module | 2026-05-12T20:01:41.601283
#include <iostream>
#include <vector>

int compute_748() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
