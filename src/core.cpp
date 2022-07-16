// Auto-generated module | 2026-05-14T06:14:57.177466
#include <iostream>
#include <vector>

int compute_155() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
