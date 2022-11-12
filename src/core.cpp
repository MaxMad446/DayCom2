// Auto-generated module | 2026-05-11T21:26:34.109463
#include <iostream>
#include <vector>

int compute_914() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
