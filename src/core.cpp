// Auto-generated module | 2026-05-11T21:39:48.608533
#include <iostream>
#include <vector>

int compute_118() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
