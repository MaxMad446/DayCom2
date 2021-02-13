// Auto-generated module | 2026-05-11T20:03:11.911493
#include <iostream>
#include <vector>

int compute_155() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
