// Auto-generated module | 2026-05-12T21:40:11.796800
#include <iostream>
#include <vector>

int compute_155() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
