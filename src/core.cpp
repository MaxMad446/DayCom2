// Auto-generated module | 2026-05-11T21:24:00.922643
#include <iostream>
#include <vector>

int compute_406() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
