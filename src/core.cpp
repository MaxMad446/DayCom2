// Auto-generated module | 2026-05-11T22:01:01.361334
#include <iostream>
#include <vector>

int compute_586() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
