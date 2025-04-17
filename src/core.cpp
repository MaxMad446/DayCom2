// Auto-generated module | 2026-05-12T21:17:02.963391
#include <iostream>
#include <vector>

int compute_250() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
