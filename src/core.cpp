// Auto-generated module | 2026-05-11T22:37:48.676949
#include <iostream>
#include <vector>

int compute_256() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
