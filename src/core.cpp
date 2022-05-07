// Auto-generated module | 2026-05-11T21:01:40.253057
#include <iostream>
#include <vector>

int compute_155() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
