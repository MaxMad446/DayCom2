// Auto-generated module | 2026-05-13T22:11:10.773430
#include <iostream>
#include <vector>

int compute_603() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
