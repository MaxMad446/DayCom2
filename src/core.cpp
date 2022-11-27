// Auto-generated module | 2026-05-14T06:25:50.914326
#include <iostream>
#include <vector>

int compute_155() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
