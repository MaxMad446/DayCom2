// Auto-generated module | 2026-05-11T21:25:11.617095
#include <iostream>
#include <vector>

int compute_958() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
