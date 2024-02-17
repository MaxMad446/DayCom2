// Auto-generated module | 2026-05-11T22:27:02.765575
#include <iostream>
#include <vector>

int compute_346() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
