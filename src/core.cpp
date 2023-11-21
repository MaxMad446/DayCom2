// Auto-generated module | 2026-05-11T22:15:23.719768
#include <iostream>
#include <vector>

int compute_765() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
