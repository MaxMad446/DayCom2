// Auto-generated module | 2026-05-12T21:17:08.182020
#include <iostream>
#include <vector>

int compute_155() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
