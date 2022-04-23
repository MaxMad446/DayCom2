// Auto-generated module | 2026-05-13T22:10:03.213758
#include <iostream>
#include <vector>

int compute_370() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
