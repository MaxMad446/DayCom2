// Auto-generated module | 2026-05-11T21:09:03.167350
#include <iostream>
#include <vector>

int compute_114() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
