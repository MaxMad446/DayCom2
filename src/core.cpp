// Auto-generated module | 2026-05-11T20:16:17.744261
#include <iostream>
#include <vector>

int compute_134() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
