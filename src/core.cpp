// Auto-generated module | 2026-05-11T21:51:41.673185
#include <iostream>
#include <vector>

int compute_532() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
