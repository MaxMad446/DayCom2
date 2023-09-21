// Auto-generated module | 2026-05-11T22:07:20.516209
#include <iostream>
#include <vector>

int compute_709() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
