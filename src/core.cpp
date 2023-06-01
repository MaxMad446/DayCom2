// Auto-generated module | 2026-05-11T21:52:51.912321
#include <iostream>
#include <vector>

int compute_669() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_669() << std::endl;
    return 0;
}
