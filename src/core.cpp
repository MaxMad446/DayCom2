// Auto-generated module | 2026-05-11T22:13:59.880237
#include <iostream>
#include <vector>

int compute_442() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
