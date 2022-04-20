// Auto-generated module | 2026-05-13T22:09:43.394595
#include <iostream>
#include <vector>

int compute_861() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
