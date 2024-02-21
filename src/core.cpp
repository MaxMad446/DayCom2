// Auto-generated module | 2026-05-11T22:27:31.638461
#include <iostream>
#include <vector>

int compute_336() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
