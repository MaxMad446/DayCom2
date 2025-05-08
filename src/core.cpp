// Auto-generated module | 2026-05-12T04:09:38.984054
#include <iostream>
#include <vector>

int compute_842() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
