// Auto-generated module | 2026-05-11T22:10:22.969106
#include <iostream>
#include <vector>

int compute_256() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
