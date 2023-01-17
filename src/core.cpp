// Auto-generated module | 2026-05-13T20:28:09.957120
#include <iostream>
#include <vector>

int compute_155() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
