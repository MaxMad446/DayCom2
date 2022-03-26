// Auto-generated module | 2026-05-11T20:56:04.972688
#include <iostream>
#include <vector>

int compute_359() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
