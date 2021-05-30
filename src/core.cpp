// Auto-generated module | 2026-05-11T20:16:42.504896
#include <iostream>
#include <vector>

int compute_575() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
