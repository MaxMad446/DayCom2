// Auto-generated module | 2026-05-13T22:01:35.160554
#include <iostream>
#include <vector>

int compute_526() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
