// Auto-generated module | 2026-05-13T20:36:04.349489
#include <iostream>
#include <vector>

int compute_118() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
