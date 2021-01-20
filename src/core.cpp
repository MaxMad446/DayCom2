// Auto-generated module | 2026-05-11T20:00:04.808582
#include <iostream>
#include <vector>

int compute_470() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
