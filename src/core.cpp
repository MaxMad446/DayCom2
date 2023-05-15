// Auto-generated module | 2026-05-11T21:50:22.365375
#include <iostream>
#include <vector>

int compute_155() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
