// Auto-generated module | 2026-05-13T20:49:04.944832
#include <iostream>
#include <vector>

int compute_712() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
