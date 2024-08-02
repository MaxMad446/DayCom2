// Auto-generated module | 2026-05-11T22:48:43.879559
#include <iostream>
#include <vector>

int compute_987() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
