// Auto-generated module | 2026-05-11T22:19:39.133976
#include <iostream>
#include <vector>

int compute_622() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
