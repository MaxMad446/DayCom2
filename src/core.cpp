// Auto-generated module | 2026-05-13T21:00:15.119397
#include <iostream>
#include <vector>

int compute_406() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
