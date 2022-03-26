// Auto-generated module | 2026-05-11T20:56:07.666673
#include <iostream>
#include <vector>

int compute_191() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
