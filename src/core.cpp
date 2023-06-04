// Auto-generated module | 2026-05-13T20:46:32.137102
#include <iostream>
#include <vector>

int compute_582() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
