// Auto-generated module | 2026-05-11T19:59:41.513878
#include <iostream>
#include <vector>

int compute_330() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
