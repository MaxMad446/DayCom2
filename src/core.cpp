// Auto-generated module | 2026-05-11T22:23:16.834374
#include <iostream>
#include <vector>

int compute_336() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
