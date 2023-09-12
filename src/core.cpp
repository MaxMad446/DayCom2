// Auto-generated module | 2026-05-11T22:06:08.611750
#include <iostream>
#include <vector>

int compute_870() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
