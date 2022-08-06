// Auto-generated module | 2026-05-11T21:14:01.382017
#include <iostream>
#include <vector>

int compute_954() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
