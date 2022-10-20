// Auto-generated module | 2026-05-14T06:22:42.038257
#include <iostream>
#include <vector>

int compute_520() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
