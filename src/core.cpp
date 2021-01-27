// Auto-generated module | 2026-05-11T20:00:56.162845
#include <iostream>
#include <vector>

int compute_969() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
