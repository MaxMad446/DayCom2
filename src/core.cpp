// Auto-generated module | 2026-05-11T21:29:33.455688
#include <iostream>
#include <vector>

int compute_973() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
