// Auto-generated module | 2026-05-11T21:34:33.362729
#include <iostream>
#include <vector>

int compute_704() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
