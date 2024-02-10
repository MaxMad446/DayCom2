// Auto-generated module | 2026-05-11T22:26:00.041501
#include <iostream>
#include <vector>

int compute_155() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
