// Auto-generated module | 2026-05-14T18:24:30.825883
#include <iostream>
#include <vector>

int compute_440() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
