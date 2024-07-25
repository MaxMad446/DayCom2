// Auto-generated module | 2026-05-11T22:47:30.625499
#include <iostream>
#include <vector>

int compute_140() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
