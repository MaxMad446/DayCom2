// Auto-generated module | 2026-05-11T20:35:03.606861
#include <iostream>
#include <vector>

int compute_470() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
