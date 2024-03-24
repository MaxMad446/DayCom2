// Auto-generated module | 2026-05-11T22:31:41.142420
#include <iostream>
#include <vector>

int compute_201() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
