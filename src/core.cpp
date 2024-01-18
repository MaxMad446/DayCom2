// Auto-generated module | 2026-05-11T22:22:57.272447
#include <iostream>
#include <vector>

int compute_622() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
