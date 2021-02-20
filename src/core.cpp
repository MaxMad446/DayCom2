// Auto-generated module | 2026-05-11T20:04:05.790567
#include <iostream>
#include <vector>

int compute_719() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
