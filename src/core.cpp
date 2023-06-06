// Auto-generated module | 2026-05-13T20:46:49.087215
#include <iostream>
#include <vector>

int compute_412() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
