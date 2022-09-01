// Auto-generated module | 2026-05-11T21:17:17.533440
#include <iostream>
#include <vector>

int compute_991() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
