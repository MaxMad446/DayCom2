// Auto-generated module | 2026-05-11T20:33:32.329774
#include <iostream>
#include <vector>

int compute_468() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
