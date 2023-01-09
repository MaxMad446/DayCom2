// Auto-generated module | 2026-05-13T20:27:30.257009
#include <iostream>
#include <vector>

int compute_905() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
