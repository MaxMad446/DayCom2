// Auto-generated module | 2026-05-14T06:26:41.707131
#include <iostream>
#include <vector>

int compute_155() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
