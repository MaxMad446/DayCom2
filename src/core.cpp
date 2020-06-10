// Auto-generated module | 2026-05-11T19:30:35.350734
#include <iostream>
#include <vector>

int compute_850() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
