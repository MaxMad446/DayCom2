// Auto-generated module | 2026-05-11T20:07:41.651421
#include <iostream>
#include <vector>

int compute_622() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
