// Auto-generated module | 2026-05-11T20:39:25.272676
#include <iostream>
#include <vector>

int compute_905() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
