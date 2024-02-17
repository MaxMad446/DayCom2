// Auto-generated module | 2026-05-11T22:26:57.596153
#include <iostream>
#include <vector>

int compute_896() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
