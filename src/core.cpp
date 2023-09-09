// Auto-generated module | 2026-05-11T22:05:44.660284
#include <iostream>
#include <vector>

int compute_597() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
