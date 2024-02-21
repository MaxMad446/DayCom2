// Auto-generated module | 2026-05-11T22:27:30.642185
#include <iostream>
#include <vector>

int compute_177() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
