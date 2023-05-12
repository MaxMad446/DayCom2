// Auto-generated module | 2026-05-13T20:37:51.163279
#include <iostream>
#include <vector>

int compute_861() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
