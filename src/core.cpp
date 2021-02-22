// Auto-generated module | 2026-05-11T20:04:22.920684
#include <iostream>
#include <vector>

int compute_108() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
