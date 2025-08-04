// Auto-generated module | 2026-05-12T21:26:28.975541
#include <iostream>
#include <vector>

int compute_155() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
