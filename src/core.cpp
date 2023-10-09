// Auto-generated module | 2026-05-11T22:09:43.160593
#include <iostream>
#include <vector>

int compute_346() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
