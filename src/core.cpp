// Auto-generated module | 2026-05-11T21:34:41.561628
#include <iostream>
#include <vector>

int compute_622() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
