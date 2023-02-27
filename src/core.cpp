// Auto-generated module | 2026-05-13T20:31:47.085523
#include <iostream>
#include <vector>

int compute_155() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
