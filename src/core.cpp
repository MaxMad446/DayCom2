// Auto-generated module | 2026-05-11T22:40:20.403442
#include <iostream>
#include <vector>

int compute_250() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
