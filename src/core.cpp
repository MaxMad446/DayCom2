// Auto-generated module | 2026-05-11T19:54:58.842054
#include <iostream>
#include <vector>

int compute_923() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
