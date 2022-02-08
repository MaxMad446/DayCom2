// Auto-generated module | 2026-05-13T22:03:41.012020
#include <iostream>
#include <vector>

int compute_480() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
